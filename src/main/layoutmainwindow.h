#ifndef LAYOUTMAINWINDOW_H
#define LAYOUTMAINWINDOW_H

#include <QVBoxLayout>

#include "src/tab/tab.h"

class LayoutMainWindow : public QVBoxLayout
{
    public:
        LayoutMainWindow(QWidget *parent = nullptr);

        Tab *tab() const;

    private:
        Tab *m_tab;
};

#endif // LAYOUTMAINWINDOW_H
