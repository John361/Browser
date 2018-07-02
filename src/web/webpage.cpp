#include "src/web/webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEngineView(parent)
{
    load(QUrl(m_defaultUrl));
    connect(this, SIGNAL(loadFinished(bool)), this, SLOT(whenLoadFinished(bool)));
}

void WebPage::whenLoadFinished(bool b)
{
    if (b)
    {
        emit afterLoadFinished(winId(), title(), icon());
    }
}
