#include "src/web/webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEngineView(parent)
{
    load(QUrl(m_defaultUrl));
    connect(this, SIGNAL(loadFinished(bool)), this, SLOT(whenLoadFinished(bool)));
    connect(this, SIGNAL(iconChanged(QIcon)), this, SLOT(onIconChanged(QIcon)));
}

void WebPage::whenLoadFinished(bool b)
{
    if (b)
    {
        emit afterLoadFinished(winId(), title(), icon());
    }
}

void WebPage::onIconChanged(const QIcon &icon)
{
    emit iconHasChanged(winId(), icon);
}
