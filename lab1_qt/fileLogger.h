#ifndef FILELOGGER_H
#define FILELOGGER_H
#include <QString>
#include <QObject>

class fileLogger: public QObject
{
    Q_OBJECT
public:
    fileLogger(){}
public slots:
    void printExist(QString name, qint64 size);
    void printChange(QString name, qint64 size);
    void printDelete(QString name);
};
#endif // FILELOGGER_H
