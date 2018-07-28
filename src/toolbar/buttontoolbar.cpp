#include "src/toolbar/buttontoolbar.h"

ButtonToolBar::ButtonToolBar(QString const &link, QIcon const &icon, QString const &tooltip, QWidget *parent) : QPushButton(icon, QString(), parent)
{
    setLink(link, tooltip);
    connect(this, SIGNAL(toggled(bool)), this, SLOT(onToggled(bool)));
}

QString ButtonToolBar::link() const
{
    return m_link;
}

void ButtonToolBar::setLink(const QString &link, const QString &tooltip)
{
    m_link = link;
    m_link.isEmpty() ? setDisabled(true) : setDisabled(false);

    setToolTip(tooltip);
}

void ButtonToolBar::onToggled(bool b)
{
    if (b && isEnabled())
    {
        emit toggled(link());
    }
}
