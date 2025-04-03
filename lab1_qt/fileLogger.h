#ifndef FILELOGGER_H
#define FILELOGGER_H
#include <QString>  //для работы с строками
#include <QObject>  //для работы уставновки сигнально-слотных связей

class FileLogger: public QObject //наследуемя от QObject
{
    Q_OBJECT //подключаем макрос, обеспечивающий корректное создание сигнально-слотных связей
public:
    FileLogger(){} //создаем конструктор по умолчанию
public slots:
    void printExist(QString name, qint64 size); //выводящий сообщение при существ-и файла
    void printChange(QString name, qint64 size); //выводящий сообщение при изменении
    void printDelete(QString name); //выводящий сообщение при удалении
};
#endif // FILELOGGER_H
