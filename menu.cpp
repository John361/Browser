#include "menu.h"

Menu::Menu(QWidget *parent) : QMenuBar(parent)
{
    QMenu *menu = new QMenu(tr("Test"));
    addMenu(menu);
}
