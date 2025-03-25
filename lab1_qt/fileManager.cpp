#include "fileManager.h"
#include "fileInfo.h"
#include <QVector>
#include <QString>
#include <QObject>

fileManager::fileManager()
{

}
bool fileManager::addFile(QString name)
{
    fileInfo file(name);
    if (files.contains(file)){
        return false;
    }
    else{
        files.append(file);
        return true;
    }
}

bool fileManager::delFile(QString name)
{
    fileInfo file(name);
    if(!(files.contains(file))) //если файл не содержится в векторе файлов, то ложь, его нет
    {
        return false;
    }
    else{                       //иначе удаляем файл и возвращаем истину, кот значит, что файла нет
        files.remove(file);
        return true;
    }
}

void fileManager::updFile()
{
    for(int i=0; i<files.count(); i++)
    {
        fileInfo newfile(files[i].isExist());
        if((newfile.isExist()!=files[i].isExist()) && (newfile.isExist()))
        {
            files[i]=newfile;
            emit fileExist(newfile.getName(), newfile.getSize());
        }
        else if ((newfile.isExist()!=files[i].isExist())&& (!newfile.isExist()))
        {
            files[i]=newfile;
            emit fileDeleted(newfile.getName());
        }
        else if ((newfile.getSize()!=files[i].getSize())&&(newfile.isExist()))
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
