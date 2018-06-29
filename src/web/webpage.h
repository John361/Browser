#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QUrl>
#include <QWebEngineView>

class WebPage : public QWebEngineView
{
    public:
        WebPage(QWidget *parent = nullptr);

    private:
        QString const m_defaultUrl = "https://www.google.com";
};

#endif // WEBPAGE_H
