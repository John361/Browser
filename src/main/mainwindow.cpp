#include "src/main/mainwindow.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    QWidget *central = new QWidget;
    m_layout = new LayoutMainWindow;
    central->setLayout(m_layout);
    setCentralWidget(central);

    m_menu = new Menu;
    setMenuBar(m_menu);

    m_toolBar = new ToolBar;
    addToolBar(m_toolBar);
}
