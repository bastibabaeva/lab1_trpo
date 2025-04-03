#include "fileManager.h"
#include "fileInfo.h"
#include "fileLogger.h"
#include <QVector>
#include <QString>
#include <QObject>
#include <QDebug>

bool FileManager::addFile(QString name) //реализация функции
{

    for (auto it = this->files.begin(); it != this->files.end(); ++it) //проходимся по всем элементам вектора
    {
        if (it->getName() == name) //если имя файла из вектора совпадает с именем файла, поступившего в кач-ве параметра
        {
            return false;   //то возвращаем ложь, файл уже есть, ничего добавлять не надо
        }
    }
    FileInfo file(name); //если файла нет, то создаем объект класса ... и иниц его ...
    this->files.push_back(file); //добавляем этот объет в вектор с помощью метода ...
    qDebug() <<"File added"; //выводим сообщение, о том, что файл создан с помощью qDebug()
    emit fileExist(file.getName(), file.getSize()); //подаем сигнал, о том, что файл существует, где передаем имя и размер
    return true; //возвращаем истину файл создали
}

bool FileManager::delFile(QString name)//реализация функции
{
    FileInfo file(name);  //создаем объект класса ... и иниц его ...
    for (auto it = this->files.begin(); it != this->files.end(); ++it)//проходимся по всем элементам вектора
    {
        if (it->getName() == name) //если имя файла из вектора совпадает с именем файла, поступившего в кач-ве параметр
        {
            files.erase(it);  // удаляем элемент
            emit fileDeleted(file.getName()); //подаем сигнал, о том, что файл удален, где передаем имя
            return true;      // успешно удалили файл
        }
    }
    return false; // файл с таким именем не найден
}

void FileManager::updFile()
{
    for(int i=0; i<files.count(); i++)
    {
        FileInfo newfile(files[i].getName());//иниц-м именем i-ого элемента из вектора

        if((newfile.isExist()!= files[i].isExist()) && (newfile.isExist())) //если файла нет в векторе и он существует
        {
            files[i]=newfile; //в i-ый элемент вектора приравниваем объект newfile
            emit fileExist(newfile.getName(), newfile.getSize()); //передаем сигнал о том, что файл существует(создан)
        }
        else if ((newfile.isExist()!= files[i].isExist())&& (!newfile.isExist())) //если файла нет в векторе и он не существует
        {
            files[i]=newfile; //в i-ый элемент вектора приравниваем объект newfile
            emit fileDeleted(newfile.getName()); //передаем сигнал о том, что файл удален
        }
        else if ((newfile.getSize()!= files[i].getSize())&&(newfile.isExist()))
        {
            files[i]=newfile; //в i-ый элемент вектора приравниваем объект newfile
            emit fileChanged(newfile.getName(), newfile.getSize()); //передаем сигнал о том, что файл изменен
        }

    }
}

FileManager& FileManager::Instance() //
{
    static FileManager F; //создаем статический объект F класса fileManager
    return F; //возвращаем объект
}
