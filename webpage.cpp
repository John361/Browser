#include "webpage.h"

WebPage::WebPage(QWidget *parent) : QWebEngineView(parent)
{
    load(QUrl("https://www.google.com"));
}
