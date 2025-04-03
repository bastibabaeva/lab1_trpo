#include "fileLogger.h"
#include <iostream> //для работы с потоками вывода на с++
#include <QTextStream> //предоставляет удобный интерфейс для чтения и написания текста.
using namespace std;


void FileLogger::printExist(QString name, qint64 size)
{
    cout<<"File: "<<name.toStdString()<<" is exist and him size: "<<size<<endl;
}
void FileLogger::printChange(QString name, qint64 size)
{
    cout<<"File: "<<name.toStdString()<<" changed and him new size: "<<size<<endl;
}
void FileLogger::printDelete(QString name)
{
    cout<<"File: "<<name.toStdString()<<" deleted"<<endl;
}
