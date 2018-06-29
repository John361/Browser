#ifndef BUTTONTOOLBAR_H
#define BUTTONTOOLBAR_H

#include <QPushButton>

class ButtonToolBar : public QPushButton
{
    Q_OBJECT

    public:
        ButtonToolBar(QWidget *parent = nullptr);

        QString *link() const;
        void setLink(QString const &link);

    private:
        QString *m_link;
};

#endif // BUTTONTOOLBAR_H
