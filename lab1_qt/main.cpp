#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include <QObject>
#include "fileInfo.h"
#include "fileManager.h"
#include "fileLogger.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    fileManager& instance=fileManager::Instance();
    fileLogger f;
    QObject::connect(&instance, &fileManager::fileExist, &f, &fileLogger::printExist);
    QObject::connect(&instance, &fileManager::fileChanged, &f, &fileLogger::printChange);
    QObject::connect(&instance, &fileManager::fileDeleted, &f, &fileLogger::printDelete);

    QString f1;
    cout<<"Enter name of file: ";
    cin>>f1;
    instance.addFile(f1);

    return a.exec();
}
