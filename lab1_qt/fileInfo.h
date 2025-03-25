#ifndef FILEINFO_H
#define FILEINFO_H
#include <QFileInfo>
#include <QObject>
#include <QString>

class fileInfo: public QString, QFileInfo
{
private:
    bool fileExist;
    QString fileName;
    qint64 fileSize;
public:
    fileInfo(){}
    fileInfo(const QString&name){}
    bool isExist();
    int getSize();
    QString getName();
}

#endif // FILEINFO_H

