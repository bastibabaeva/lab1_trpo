#ifndef FILEMANAGER_H
#define FILEMANAGER_H
#include <QString>
#include <QObject>
#include <QFileInfo>
#include <QVector>
#include "fileInfo.h"
#include "fileLogger.h"

class FileManager: public QObject //наследуемя от QObject
{
    Q_OBJECT //подключаем макрос для сигнально-слотных связей
private:
    QVector <FileInfo> files; //создаем вектор файлов
    FileManager(){} //создаем конструктор по умолчанию
    FileManager(const QString&name);//создаем конструктор с параметром
public:
    bool addFile(QString name); //функция добавления файла в вектор
    bool delFile(QString name); //функция удаления файла из вектор
    void updFile(); //функция обновления  файла
    static FileManager& Instance(); //статическая функция, которая будет использоваться для получения одиночки
signals:     // сигналы о том, что файл создан/изменен/удален
    void fileExist(QString name, qint64 size); //
    void fileChanged(QString name,  qint64 size);
    void fileDeleted(QString name);
};

#endif // FILEMANAGER_H
