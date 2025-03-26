#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QString>
#include <QObject>
#include <QFileInfo>
#include <QVector>
#include "fileInfo.h"
#include "fileLogger.h"

class fileManager: public QObject
{
    Q_OBJECT
private:
    QVector <fileInfo> files;
    fileManager();
    fileManager(const QString&name);
public:
    bool addFile(QString name);
    bool delFile(QString name);
    void updFile();
    static fileManager& Instance();
signals:
    fileExist(QString name, qint64 size);
    fileChanged(QString name,  qint64 size);
    fileDeleted(QString name);
};

#endif // FILEMANAGER_H
