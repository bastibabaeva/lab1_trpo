#include "fileInfo.h"
#include <QFileInfo>
#include <QObject>
#include <QString>
#include "fileInfo.h"
//конструктор
FileInfo::FileInfo(const QString& name)
{
    fileName=name; //создаем объект fileName и приравниваем к нему объект name
    QFileInfo file (fileName); //создаем объект file класса QFileInfo и иниц-м его name
    fileSize=file.size(); //создаем fileSize и = значение размера получаемый с помощью метода size()
    fileExist=file.exists(); //создаем fileExist и = значение существования получаемый с помощью метода exists()
}

//геттеры

bool FileInfo::isExist()
{
    return fileExist; //возвращаем значения член-данного fileExist(факт существ-я)
}
int FileInfo::getSize()
{
    return fileSize; //возвращаем значения член-данного fileSize(размер файла)
}
QString FileInfo::getName()
{
    return fileName; //возвращаем значения член-данного fileName(имя файла)
}
