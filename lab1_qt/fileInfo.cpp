#include "fileInfo.h"
#include <QFileInfo>
#include <QObject>
#include <QString>

//конструктор
fileInfo::fileInfo(const QString& name)
{
    fileName=name;
    QFileInfo file (fileName);
    fileSize=file.size();
    fileExist=file.exists();
}

//геттеры

bool fileInfo::isExist()
{
    return fileExist;
}
int fileInfo::getSize()
{
    return fileSize;
}
QString fileInfo::getName()
{
    return fileName;
}
