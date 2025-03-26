#include "fileManager.h"
#include "fileInfo.h"
#include "fileLogger.h"
#include <QVector>
#include <QString>
#include <QObject>
#include <QDebug>

bool fileManager::addFile(QString name)
{

    for (auto it = this->files.begin(); it != this->files.end(); ++it)
    {
        if (it->getName() == name)
        {
            return false;
        }
    }
    fileInfo file(name);
    this->files.push_back(file);
    qDebug() <<"File added";
    emit fileExist(file.getName(), file.getSize());
    return true;
}

bool fileManager::delFile(QString name)
{
    fileInfo file(name);
    for (auto it = this->files.begin(); it != this->files.end(); ++it)
    {
        if (it->getName() == name)
        {
            files.erase(it);  // удаляем элемент
            qDebug() <<"File deleted";
            emit fileDeleted(file.getName());
            return true;      // успешно удалили файл
        }
    }
    qDebug() <<"File not found";
    return false; // файл с таким именем не найден
}

void fileManager::updFile()
{
    for(int i=0; i<files.count(); i++)
    {
        fileInfo newfile(files[i].getName());
        if((newfile.isExist()!= files[i].isExist()) && (newfile.isExist()))
        {
            files[i]=newfile;
            emit fileExist(newfile.getName(), newfile.getSize());
        }
        else if ((newfile.isExist()!= files[i].isExist())&& (!newfile.isExist()))
        {
            files[i]=newfile;
            emit fileDeleted(newfile.getName());
        }
        else if ((newfile.getSize()!= files[i].getSize())&&(newfile.isExist()))
        {
            files[i]=newfile;
            emit fileChanged(newfile.getName(), newfile.getSize());
        }
    }
}

fileManager& fileManager::Instance()
{
    static fileManager F;
    return F;
}
