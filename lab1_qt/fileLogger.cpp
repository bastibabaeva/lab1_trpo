#include "fileLogger.h"
#include <iostream>
#include <QTextStream>
#include <QTextCodec>
using namespace std;

fileLogger::fileLogger()
{

}
void fileLogger::printExist(QString name, qint64 size)
{
    cout<<"File: "<<name.toStdString()<<" is exist and him size: "<<size<<endl;
}
void fileLogger::printChange(QString name, qint64 size)
{
    cout<<"File: "<<name.toStdString()<<" changed and him new size: "<<size<<endl;
}
void fileLogger::printDelete(QString name)
{
    cout<<"File: "<<name.toStdString()<<" deleted"<<endl;
}
