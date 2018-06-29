#include "src/toolbar/toolbar.h"

ToolBar::ToolBar(QWidget *parent) : QToolBar(parent)
{
    m_btnPrev = new ButtonToolBar;
    m_btnNext = new ButtonToolBar;
    m_btnReload = new ButtonToolBar;
    m_btnHome = new ButtonToolBar;
    m_lineEdit = new QLineEdit;
}

ButtonToolBar *ToolBar::btnPrev()
{
    return m_btnPrev;
}

ButtonToolBar *ToolBar::btnNext()
{
    return m_btnNext;
}

ButtonToolBar *ToolBar::btnReload()
{
    return m_btnReload;
}

ButtonToolBar *ToolBar::btnHome()
{
    return m_btnHome;
}

QLineEdit *ToolBar::lineEdit()
{
    return m_lineEdit;
}
