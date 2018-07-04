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
         * @param iconUrl
         */
        void afterLoadFinished(WId const &wid, QString const &title, QIcon const &icon);

        /**
         * @brief iconHasChanged
         * @param icon
         */
        void iconHasChanged(WId const &wid, QIcon const &icon);

    private slots:
        /**
         * @brief whenLoadFinished emits afterLoadFinished when loadFinished(bool) is emited
         * @param b
         */
        void whenLoadFinished(bool b);

        /**
         * @brief onIconChanged shares icon when its loaded
         * @param icon
         */
        void onIconChanged(QIcon const &icon);
};

#endif // WEBPAGE_H
