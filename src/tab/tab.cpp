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
}

void Tab::addTab(WebPage *page)
{
    if (!m_pages->contains(page))
    {
        m_pages->append(page);
        QTabWidget::addTab(page, page->icon(), page->title());
    }
}

void Tab::onDoubleClick(int i)
{
    if (i == -1)
    {
        WebPage *page = new WebPage;
        addTab(page);

        setCurrentIndex(count()-1);
    }
}

void Tab::onTabCloseClick(int i)
{
    removeTab(i);

    if (tabBar()->count() == 0)
    {
        parentWidget()->parentWidget()->close();
    }
}
