#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "src/main/layoutmainwindow.h"
#include "src/menu/menu.h"
#include "src/toolbar/toolbar.h"

class MainWindow : public QMainWindow
{
    public:
        MainWindow(QWidget *parent = nullptr);

    private:
        LayoutMainWindow *m_layout;
        Menu *m_menu;
        ToolBar *m_toolBar;
};

#endif // MAINWINDOW_H
