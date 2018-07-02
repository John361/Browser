#include "src/toolbar/buttontoolbar.h"

ButtonToolBar::ButtonToolBar(QString const &link, QWidget *parent) : QPushButton(parent)
{
    m_link = QString(link);
    connect(this, SIGNAL(toggled(bool)), this, SLOT(onToggled(bool)));
}

QString ButtonToolBar::link() const
{
    return m_link;
}

void ButtonToolBar::setLink(const QString &link)
{
    m_link = link;
    m_link.isEmpty() ? setDisabled(true) : setDisabled(false);
}

void ButtonToolBar::onToggled(bool b)
{
    if (b && isEnabled())
    {
        emit toggled(link());
    }
}
