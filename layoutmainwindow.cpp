#include "layoutmainwindow.h"

LayoutMainWindow::LayoutMainWindow(QWidget *parent) : QVBoxLayout(parent)
{
    m_tab = new Tab;
    addWidget(m_tab);
}

Tab *LayoutMainWindow::tab() const
{
    return m_tab;
}
