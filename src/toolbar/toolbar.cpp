#include "src/toolbar/toolbar.h"

ToolBar::ToolBar(QWidget *parent) : QToolBar(parent)
{
    m_btnPrev = new ButtonToolBar("", QIcon(":/images/previous-icon.png"), tr("Previous page"));
    m_btnNext = new ButtonToolBar("", QIcon(":/images/next-icon.png"), tr("Next page"));
    m_btnReload = new ButtonToolBar("", QIcon(":/images/reload-icon.png"), tr("Reload page"));
    m_btnHome = new ButtonToolBar("", QIcon(":/images/home-icon.png"), tr("Home page"));
    m_lineEdit = new QLineEdit;

    addWidget(m_btnPrev);
    addWidget(m_btnNext);
    addWidget(m_btnReload);
    addWidget(m_btnHome);
    addWidget(m_lineEdit);
    setMovable(false);

    connect(m_btnPrev, SIGNAL(toggled(QString)), this, SLOT(onBtnToggled(QString)));
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

void ToolBar::onBtnToggled(QString const link)
{
    if (!link.isEmpty() && !link.isNull())
    {
        emit linkFromBtnAsked(link);
    }
}
