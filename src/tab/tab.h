#ifndef TAB_H
#define TAB_H

#include <QTabBar>
#include <QTabWidget>
#include <QVector>

#include "src/web/webpage.h"

class Tab : public QTabWidget
{
    Q_OBJECT

    public:
        Tab(QWidget *parent = nullptr);

        void addTab(WebPage *page);

    private:
        QVector<WebPage*> *m_pages;

    private slots:
        void onDoubleClick(int i);

        void onTabCloseClick(int i);
};

#endif // TAB_H
