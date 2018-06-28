#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    m_layout = new LayoutMainWindow;
    m_menu = new Menu;

    setLayout(m_layout);
    setMenuBar(m_menu);
}
