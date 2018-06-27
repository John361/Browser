#ifndef LAYOUTMAINWINDOW_H
#define LAYOUTMAINWINDOW_H

#include <QVBoxLayout>

#include "tab.h"
#include "toolbar.h"

class LayoutMainWindow : public QVBoxLayout
{
    public:
        LayoutMainWindow(QWidget *parent = nullptr);

    private:
        Tab *m_tab;
        ToolBar *m_toolBar;
};

#endif // LAYOUTMAINWINDOW_H
