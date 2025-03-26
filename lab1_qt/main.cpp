#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include "fileInfo.h"
#include "fileManager.h"
#include "fileLogger.h"
//#include <iostream>
#include <QDebug>
#include <QTimer>
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    fileManager &instance=fileManager::Instance();
    fileLogger f;
    QObject::connect(&instance, &fileManager::fileExist, &f, &fileLogger::printExist);
    QObject::connect(&instance, &fileManager::fileChanged, &f, &fileLogger::printChange);
    QObject::connect(&instance, &fileManager::fileDeleted, &f, &fileLogger::printDelete);

    QString f1, f2;
    qDebug() << "Enter name of file to add: ";
    cin >> f1;
    instance.addFile(f1);
    cin >> f2;
    instance.addFile(f2);

    QTimer timer;
    QObject::connect(&timer, &QTimer::timeout, &instance, &fileManager::updFile); //Когда timeout - истекает время таймера вызывается слот - Monitoring
    timer.start(100); // Запуск таймера с интервалом 100 миллисекунд

    return a.exec();
}
