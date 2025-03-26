#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include <QTextCodec>
#include <QObject>
#include "fileInfo.h"
#include "fileManager.h"
#include "fileLogger.h"
#include <iostream>
#include <string>
//using std::cin;
//using std::cout;
//using namespace std;
QTextStream cout(stdout), cin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    fileManager& instance=fileManager::Instance();
    fileLogger f;
    QObject::connect(&instance, &fileManager::fileExist, &f, &fileLogger::printExist);
    QObject::connect(&instance, &fileManager::fileChanged, &f, &fileLogger::printChange);
    QObject::connect(&instance, &fileManager::fileDeleted, &f, &fileLogger::printDelete);

    QString f1;
    cout << "Enter name of file: ";
    cin >> f1;
    instance.addFile(f1);

    QString f2;
    cout << "Enter name of file to delete: ";
    cin >> f1;
    instance.delFile(f2);

   //string f3;
    //std::cout << "Enter name of file to check: ";
    //std::cin >> f3;
    instance.updFile();
    return a.exec();
}
