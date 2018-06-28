#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "layoutmainwindow.h"
#include "menu.h"
#include "toolbar.h"

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
