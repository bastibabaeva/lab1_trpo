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
   /* if (files.contains(file)){
        return false;
    }
    else{
        files.append(file);
        return true;
    }*/
    for(auto i: this->files)
    {
        if(file.getName()==i.getName())
        {
            return false;
        }
        else{
            files.push_back(file);
            return true;
        }
    }
}

bool fileManager::delFile(QString name)
{
    fileInfo file(name);
    /*if(!(files.contains(file))) //если файл не содержится в векторе файлов, то ложь, его нет, нечего удалять
    {
        return false;
    }
    else{                       //иначе удаляем файл и возвращаем истину, кот значит, что файла нет
        files.removeOne(file);
        return true;
    }*/
    for (auto it = this->files.begin(); it != this->files.end(); ++it)
    {
        if (it->getName() == name)
        {
            files.erase(it);  // удаляем элемент
            return true;      // успешно удалили файл
        }
    }
    return false; // файл с таким именем не найден
}

void fileManager::updFile()
{
    //for(int i=0; i<files.count(); i++)
    for(auto i: this->files)
    {
        fileInfo newfile(i.getName());
        if((newfile.isExist()!=i.isExist()) && (newfile.isExist()))
        {
            //files[i]=newfile;
            emit fileExist(newfile.getName(), newfile.getSize());
        }
        else if ((newfile.isExist()!=i.isExist())&& (!newfile.isExist()))
        {
            //files[i]=newfile;
            emit fileDeleted(newfile.getName());
        }
        else if ((newfile.getSize()!=i.getSize())&&(newfile.isExist()))
        {
            //files[i]=newfile;
            emit fileChanged(newfile.getName(), newfile.getSize());
        }
    }
}

fileManager& fileManager::Instance()
{
    static fileManager F;
    return F;
}
