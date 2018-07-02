#ifndef TOOLBAR_H
#define TOOLBAR_H

#include <QLineEdit>
#include <QToolBar>

#include "src/toolbar/buttontoolbar.h"

class ToolBar : public QToolBar
{
    Q_OBJECT

    public:
        ToolBar(QWidget *parent = nullptr);

        /**
         * @brief btnPrev returns m_btnPrev
         * @return
         */
        ButtonToolBar *btnPrev();

        /**
         * @brief btnNext returns m_btnNext
         * @return
         */
        ButtonToolBar *btnNext();

        /**
         * @brief btnReload returns m_btnReload
         * @return
         */
        ButtonToolBar *btnReload();

        /**
         * @brief btnHome returns m_btnHome
         * @return
         */
        ButtonToolBar *btnHome();

        /**
         * @brief lineEdit returns m_lineEdit
         * @return
         */
        QLineEdit *lineEdit();

    private:
        ButtonToolBar *m_btnPrev;
        ButtonToolBar *m_btnNext;
        ButtonToolBar *m_btnReload;
        ButtonToolBar *m_btnHome;
        QLineEdit *m_lineEdit;

    private slots:
        /**
         * @brief onBtnToggled emits linkFromBtnAsked(QString const) and receives the signal from a button
         * @param link
         */
        void onBtnToggled(QString const link);

    signals:
        /**
         * @brief linkFromBtnAsked is emited by onBtnToggled(QString const)
         * @param link
         */
        void linkFromBtnAsked(QString const link);
};

#endif // TOOLBAR_H
