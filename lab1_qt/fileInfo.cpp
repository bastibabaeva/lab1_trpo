
#include "fileInfo.h"
#include <QFileInfo>
#include <QObject>
#include <QString>

//конструкторы
fileInfo::fileInfo()
{

}
fileInfo::fileInfo(const QString& name)
{
    fName=name;
    QFileInfo file (fName);
    fSize=file.size();
    fExist=file.exist();
}

//геттеры

bool fileInfo::isExist()
{
    return fExist;
}
int fileInfo::getSize()
{
    return fSize;
}
QString fileInfo::getName()
{
    return fName;
}
