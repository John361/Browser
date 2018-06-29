#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QLineEdit>
#include <QToolBar>

#include "src/toolbar/buttontoolbar.h"

class ToolBar : public QToolBar
{
    public:
        ToolBar(QWidget *parent = nullptr);

        ButtonToolBar *btnPrev();
        ButtonToolBar *btnNext();
        ButtonToolBar *btnReload();
        ButtonToolBar *btnHome();
        QLineEdit *lineEdit();

    private:
        ButtonToolBar *m_btnPrev;
        ButtonToolBar *m_btnNext;
        ButtonToolBar *m_btnReload;
        ButtonToolBar *m_btnHome;
        QLineEdit *m_lineEdit;
};

#endif // TOOLBAR_H
