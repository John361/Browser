#include "webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEngineView(parent)
{
    load(QUrl(m_defaultUrl));
}
