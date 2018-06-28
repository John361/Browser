#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "layoutmainwindow.h"
#include "menu.h"

class MainWindow : public QMainWindow
{
    public:
        MainWindow(QWidget *parent = nullptr);

    private:
        LayoutMainWindow *m_layout;
        Menu *m_menu;
};

#endif // MAINWINDOW_H
