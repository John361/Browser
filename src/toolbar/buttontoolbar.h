#ifndef BUTTONTOOLBAR_H
#define BUTTONTOOLBAR_H

#include <QPushButton>

class ButtonToolBar : public QPushButton
{
    Q_OBJECT

    public:
        ButtonToolBar(QString const &link, QWidget *parent = nullptr);

        /**
         * @brief link returns m_link as const
         * @return
         */
        QString link() const;

        /**
         * @brief setLink sets a value to m_link and disabled it if its empty
         * @param link
         */
        void setLink(QString const &link);

    private:
        QString m_link;

    private slots:
        /**
         * @brief onToggled emits toggled(QString const&)
         * @param b
         */
        void onToggled(bool b);

    signals:
        /**
         * @brief toggled signals the current m_link
         * @param link
         */
        void toggled(QString const link);
};

#endif // BUTTONTOOLBAR_H
