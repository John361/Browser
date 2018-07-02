#ifndef WEBPAGE_H
#define WEBPAGE_H

#include <QIcon>
#include <QUrl>
#include <QWebEngineView>

class WebPage : public QWebEngineView
{
    Q_OBJECT

    public:
        WebPage(QWidget *parent = nullptr);

    private:
        QString const m_defaultUrl = "https://www.google.com";

    signals:
        /**
         * @brief afterLoadFinished is used with Tab class and allow to describe tab
         * @param wid
         * @param title
         * @param icon
         */
        void afterLoadFinished(WId const &wid, QString const &title, QIcon const &icon);

    private slots:
        /**
         * @brief whenLoadFinished emits afterLoadFinished when loadFinished(bool) is emited
         * @param b
         */
        void whenLoadFinished(bool b);
};

#endif // WEBPAGE_H
