#include "layoutmainwindow.h"

LayoutMainWindow::LayoutMainWindow(QWidget *parent) : QVBoxLayout(parent)
{
    m_tab = new Tab;
    m_toolBar = new ToolBar;

    addWidget(m_tab);
    addWidget(m_toolBar);
}

Tab *LayoutMainWindow::tab() const
{
    return m_tab;
}

ToolBar *LayoutMainWindow::toolBar() const
{
    return m_toolBar;
}
