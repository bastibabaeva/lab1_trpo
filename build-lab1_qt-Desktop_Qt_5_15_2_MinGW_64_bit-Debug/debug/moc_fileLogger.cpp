/****************************************************************************
** Meta object code from reading C++ file 'fileLogger.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab1_qt/fileLogger.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileLogger.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fileLogger_t {
    QByteArrayData data[7];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fileLogger_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fileLogger_t qt_meta_stringdata_fileLogger = {
    {
QT_MOC_LITERAL(0, 0, 10), // "fileLogger"
QT_MOC_LITERAL(1, 11, 10), // "printExist"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "name"
QT_MOC_LITERAL(4, 28, 4), // "size"
QT_MOC_LITERAL(5, 33, 11), // "printChange"
QT_MOC_LITERAL(6, 45, 11) // "printDelete"

    },
    "fileLogger\0printExist\0\0name\0size\0"
    "printChange\0printDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fileLogger[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x0a /* Public */,
       5,    2,   34,    2, 0x0a /* Public */,
       6,    1,   39,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong,    3,    4,
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void fileLogger::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fileLogger *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->printExist((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 1: _t->printChange((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2]))); break;
        case 2: _t->printDelete((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject fileLogger::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_fileLogger.data,
    qt_meta_data_fileLogger,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fileLogger::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fileLogger::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fileLogger.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fileLogger::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
