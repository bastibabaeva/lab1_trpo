#include "fileLogger.h"
#include <iostream>

fileLogger::fileLogger()
{

}
fileLogger::printExist(QString name, qint64 size)
{
    cout<<"File: "<<name<<" is exist and him size: "<<size<<endl;
}
fileLogger::printChange(QString name, qint64 size)
{
    cout<<"File: "<<name<<" changed and him new size: "<<size<<endl;
}
fileLogger::printDelete(QString name)
{
    cout<<"File: "<<name<<" deleted"<<endl;
}
