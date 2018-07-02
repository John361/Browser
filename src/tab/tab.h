#ifndef TAB_H
#define TAB_H

#include <QIcon>
#include <QTabBar>
#include <QTabWidget>
#include <QVector>

#include "src/web/webpage.h"

class Tab : public QTabWidget
{
    Q_OBJECT

    public:
        Tab(QWidget *parent = nullptr);

        /**
         * @brief addTab processes before QTabWidget::addTab
         * @param page
         */
        void addTab(WebPage *page);

    private:
        /**
         * @brief m_pages contains all WebPage in tabbar
         */
        QVector<WebPage*> *m_pages;

    private slots:
        /**
         * @brief onDoubleClick creates a new WebPage and adds it to the tab
         * @param i
         */
        void onDoubleClick(int i);

        /**
         * @brief onTabCloseClick deletes WebPage from tabbar and closes application if there is no more
         * @param i
         */
        void onTabCloseClick(int i);

        /**
         * @brief onCurrentChange can change url to toolbar
         * @param i
         */
        void onCurrentChange(int i);

        /**
         * @brief afterLoadFinished sets title and icon to the WebPage parent when WebPage signals afterLoadFinished(WId,QString,QIcon)
         * @param wid
         * @param title
         * @param icon
         */
        void afterLoadFinished(WId const &wid, QString const &title, QIcon const &icon);

    signals:
        /**
         * @brief currentUrlChanged sends WebPage's url of the current tab
         * @param url
         */
        void currentUrlChanged(QString const& url);
};

#endif // TAB_H
