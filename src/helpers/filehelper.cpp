#include "filehelper.h"

FileHelper::FileHelper(QString const &fileName)
{
    m_file = new QFile(fileName);
    QString text = m_file->readAll();
    m_file->close();

    QJsonDocument document = QJsonDocument::fromJson(text.toUtf8());
    m_json = document.object();
}

QString FileHelper::get(QString const& key) const
{
    return m_json.value(key).toString();
}
