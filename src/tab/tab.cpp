#include "src/tab/tab.h"

Tab::Tab(QWidget *parent) : QTabWidget(parent)
{
    m_pages = new QVector<WebPage*>();
    WebPage *page = new WebPage;
    addTab(page);

    setDocumentMode(true);
    setTabsClosable(true);

    connect(this, SIGNAL(tabBarDoubleClicked(int)), this, SLOT(onDoubleClick(int)));
    connect(this, SIGNAL(tabCloseRequested(int)), this, SLOT(onTabCloseClick(int)));
    connect(this, SIGNAL(currentChanged(int)), this, SLOT(onCurrentChange(int)));
}

void Tab::addTab(WebPage *page)
{
    if (!m_pages->contains(page))
    {
        m_pages->append(page);
        QTabWidget::addTab(page, tr("Loading..."));
        setCurrentIndex(indexOf(page));

        connect(page, SIGNAL(afterLoadFinished(WId,QString,QIcon)), this, SLOT(afterLoadFinished(WId,QString,QIcon)));
        connect(page, SIGNAL(iconHasChanged(WId,QIcon)), this, SLOT(tabIconHasChanged(WId,QIcon)));
    }

    else
    {
        delete page;
    }
}

void Tab::onDoubleClick(int i)
{
    if (i == -1)
    {
        WebPage *page = new WebPage;
        addTab(page);
    }
}

void Tab::onTabCloseClick(int i)
{
    WebPage *page = qobject_cast<WebPage*>(widget(i));
    m_pages->remove(i);
    removeTab(i);
    delete page;

    if (tabBar()->count() == 0)
    {
        parentWidget()->parentWidget()->close();
        delete m_pages;
    }
}

void Tab::onCurrentChange(int i)
{
    if (i != -1)
    {
        WebPage *page = qobject_cast<WebPage*>(widget(i));
        emit currentUrlChanged(page->url().toDisplayString());
    }
}

void Tab::afterLoadFinished(WId const &wid, QString const &title, QIcon const &icon)
{
    WebPage *page = qobject_cast<WebPage*>(find(wid));
    setTabText(m_pages->indexOf(page), title);
    setTabIcon(m_pages->indexOf(page), icon);

    emit currentUrlChanged(page->url().toDisplayString());
}

void Tab::tabIconHasChanged(WId const &wid, QIcon const &icon)
{
    WebPage *page = qobject_cast<WebPage*>(find(wid));
    setTabIcon(m_pages->indexOf(page), icon);
}
