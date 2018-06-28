#include "tab.h"

Tab::Tab(QWidget *parent) : QTabWidget(parent)
{
    m_pages = new QVector<WebPage>();
}

Tab::addTab(WebPage *page)
{
    if (!m_pages->contains(page))
    {
        m_pages->append(page);
        QTabWidget::addTab(page, page->icon(), page->title());
    }
}
