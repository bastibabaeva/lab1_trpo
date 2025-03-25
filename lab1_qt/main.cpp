#include <QCoreApplication>
#include <QString>
#include "fileInfo.h"
#include "fileManager.h"
#include "fileLogger.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    fileInfo& instance=fileInfo::Instance();
    fileManager f;
    QObject::connect(&instanse, &fileManager::fileExist, &f, &fileLogger::printExist);
    QObject::connect(&instanse, &fileManager::fileChanged, &f, &fileLogger::printChange);
    QObject::connect(&instanse, &fileManager::fileDeleted, &f, &fileLogger::printDelete);

    QString f1;
    cout<<"Enter name of file: ";
    f1<<cin;
    f.addFile(f1);
    return a.exec();
}
