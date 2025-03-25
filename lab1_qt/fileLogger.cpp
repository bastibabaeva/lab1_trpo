#include "fileLogger.h"
#include <iostream>
using namespace std;

fileLogger::fileLogger()
{

}
void fileLogger::printExist(QString name, qint64 size)
{
    cout<<"File: "<<name<<" is exist and him size: "<<size<<endl;
}
void fileLogger::printChange(QString name, qint64 size)
{
    cout<<"File: "<<name<<" changed and him new size: "<<size<<endl;
}
void fileLogger::printDelete(QString name)
{
    cout<<"File: "<<name<<" deleted"<<endl;
}
