#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include <QTextCodec>
#include <QObject>
#include <fileInfo.h>
#include <fileManager.h>
#include <fileLogger.h>
#include <iostream>
#include <thread>
#include <chrono>
#include <QDebug>
//using std::cin;
//using std::cout;
//using namespace std;
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    fileManager &instance=fileManager::Instance();
    fileLogger f;
    QObject::connect(&instance, &fileManager::fileExist, &f, &fileLogger::printExist);
    QObject::connect(&instance, &fileManager::fileChanged, &f, &fileLogger::printChange);
    QObject::connect(&instance, &fileManager::fileDeleted, &f, &fileLogger::printDelete);

    QString f1;
    qDebug() << "Enter name of file to add: ";
    cin >> f1;
    instance.addFile(f1);

    QString f2;
    qDebug()  << "Enter name of file to delete: ";
    cin >> f2;
    instance.delFile(f2);


   QString f3;
   qDebug()<< "Enter name of file to check: ";
   cin >> f3;
   instance.updFile();
    return a.exec();
}
