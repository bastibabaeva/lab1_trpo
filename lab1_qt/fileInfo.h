#ifndef FILEINFO_H
#define FILEINFO_H
#include <QFileInfo> //для работы с информацией о файле
#include <QString>  //для работы с строками

class FileInfo
{
private:
    bool fileExist;    //существование файла
    QString fileName; //имя файла
    qint64 fileSize;  //размер файла
public:
    FileInfo(const QString& name); //конструктор с параметром
    bool isExist(); //функция, отвечающая за существование файла
    int getSize(); //функция, отвечающая за размер файла
    QString getName(); //функция, отвечающая за имя файла
};

#endif // FILEINFO_H

