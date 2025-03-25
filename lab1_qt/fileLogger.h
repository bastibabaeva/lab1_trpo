#ifndef FILELOGGER_H
#define FILELOGGER_H
#include <QVector>
#include <QString>
#include <QObject>

class fileLogger
{
public:
    fileLogger();
public slots:
    printExist(QString name, qint64 size);
    printChange(QString name, qint64 size);
    printDelete(QString name);
};
#endif // FILELOGGER_H
