#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QUrl>
#include <QWebEngineView>

class WebPage : public QWebEngineView
{
    public:
        WebPage(QWidget *parent = nullptr);
};

#endif // WEBPAGE_H
