/****************************************************************************
** Meta object code from reading C++ file 'fileManager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../lab1_qt/fileManager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_fileManager_t {
    QByteArrayData data[7];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_fileManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_fileManager_t qt_meta_stringdata_fileManager = {
    {
QT_MOC_LITERAL(0, 0, 11), // "fileManager"
QT_MOC_LITERAL(1, 12, 9), // "fileExist"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "name"
QT_MOC_LITERAL(4, 28, 4), // "size"
QT_MOC_LITERAL(5, 33, 11), // "fileChanged"
QT_MOC_LITERAL(6, 45, 11) // "fileDeleted"

    },
    "fileManager\0fileExist\0\0name\0size\0"
    "fileChanged\0fileDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_fileManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,
       5,    2,   34,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Int, QMetaType::QString, QMetaType::LongLong,    3,    4,
    QMetaType::Int, QMetaType::QString, QMetaType::LongLong,    3,    4,
    QMetaType::Int, QMetaType::QString,    3,

       0        // eod
};

void fileManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<fileManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { int _r = _t->fileExist((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { int _r = _t->fileChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< qint64(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 2: { int _r = _t->fileDeleted((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = int (fileManager::*)(QString , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fileManager::fileExist)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = int (fileManager::*)(QString , qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fileManager::fileChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = int (fileManager::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&fileManager::fileDeleted)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject fileManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_fileManager.data,
    qt_meta_data_fileManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *fileManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *fileManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_fileManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int fileManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
int fileManager::fileExist(QString _t1, qint64 _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}

// SIGNAL 1
int fileManager::fileChanged(QString _t1, qint64 _t2)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
    return _t0;
}

// SIGNAL 2
int fileManager::fileDeleted(QString _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
