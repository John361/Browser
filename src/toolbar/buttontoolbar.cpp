#include "src/toolbar/buttontoolbar.h"

ButtonToolBar::ButtonToolBar(QWidget *parent) : QPushButton(parent)
{

}

QString *ButtonToolBar::link() const
{
    return m_link;
}

void ButtonToolBar::setLink(const QString &link)
{
    *m_link = link;
}
