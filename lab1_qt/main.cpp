#include <QCoreApplication>
#include <QString>
#include <QTextStream>
#include "fileInfo.h"
#include "fileManager.h"
#include "fileLogger.h"
#include <QDebug>
#include <QTimer>
QTextStream cin(stdin);

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    FileManager &instance=FileManager::Instance(); //2 вызов статического метода Instance() класса fileManager
                                                        //для создания единственного экземпляра класса fileManager
             //1 создаем единственный объект класса fileManager и предоставляет к нему доступ через ссылку instance

    FileLogger f;
    QObject::connect(&instance, &FileManager::fileExist, &f, &FileLogger::printExist);
    //связь сигнала и слота, когда сработает сигнал fileExist от объекта instance, будет вызван слот printExist от f
    QObject::connect(&instance, &FileManager::fileChanged, &f, &FileLogger::printChange);
    QObject::connect(&instance, &FileManager::fileDeleted, &f, &FileLogger::printDelete);

    QString f1, f2;
    qDebug() << "Enter names of 2 file to add: ";
    cin >> f1;
    instance.addFile(f1);
    cin >> f2;
    instance.addFile(f2);

    QTimer timer; // Создаём объект таймера.
    QObject::connect(&timer, &QTimer::timeout, &instance, &FileManager::updFile); //Когда timeout - истекает время таймера вызывается слот updFile
    // Настраиваем сигнал и слот: когда сработает сигнал timeout от объекта timer, будет вызван слот updFile у объекта instance
    timer.start(100); // Запуск таймера с интервалом 100 миллисекунд; каждые 100 миллисекунд будет срабатывать сигнал timeout,

    return a.exec();
}
