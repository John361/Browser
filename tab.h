#ifndef TAB_H
#define TAB_H

#include <QTabWidget>
#include <QVector>

#include "webpage.h"

class Tab : public QTabWidget
{
    public:
        Tab(QWidget *parent = nullptr);

        void addTab(WebPage *page);

    private:
        QVector<WebPage*> *m_pages;
};

#endif // TAB_H
