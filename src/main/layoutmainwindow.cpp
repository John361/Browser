#include "main/layoutmainwindow.h"

LayoutMainWindow::LayoutMainWindow(QWidget *parent) : QVBoxLayout(parent)
{
    m_tab = new Tab;
    addWidget(m_tab);
    setContentsMargins(0, 0, 0, 0);
}

Tab *LayoutMainWindow::tab() const
{
    return m_tab;
}
