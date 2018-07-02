#ifndef FILEHELPER_H
#define FILEHELPER_H

#include <QFile>
#include <QJsonDocument>
#include <QJsonObject>
#include <QJsonValue>

class FileHelper
{
    public:
        FileHelper(QString const &fileName);

    private:
        QFile *m_file;
        QJsonObject m_json;

        /**
         * @brief get the value of the key in the json file
         * @param key
         * @return
         */
        QString get(QString const &key) const;
};

#endif // FILEHELPER_H
