/****************************************************************************
** Meta object code from reading C++ file 'playlist.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../playlist.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlist.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_playList_t {
    QByteArrayData data[21];
    char stringdata0[393];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_playList_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_playList_t qt_meta_stringdata_playList = {
    {
QT_MOC_LITERAL(0, 0, 8), // "playList"
QT_MOC_LITERAL(1, 9, 23), // "changeFilesInListSignal"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "QList<QString>"
QT_MOC_LITERAL(4, 49, 28), // "leftBarListFilesChangeSignal"
QT_MOC_LITERAL(5, 78, 26), // "downloadFilesChangesSignal"
QT_MOC_LITERAL(6, 105, 15), // "sendFileAddress"
QT_MOC_LITERAL(7, 121, 24), // "temp_removeContentSignal"
QT_MOC_LITERAL(8, 146, 16), // "sendTempPlayInfo"
QT_MOC_LITERAL(9, 163, 8), // "PlayArea"
QT_MOC_LITERAL(10, 172, 26), // "temp_addFileToFolderSignal"
QT_MOC_LITERAL(11, 199, 23), // "deleteFilesInListSignal"
QT_MOC_LITERAL(12, 223, 38), // "on_playlist_customContextMenu..."
QT_MOC_LITERAL(13, 262, 8), // "addFiles"
QT_MOC_LITERAL(14, 271, 18), // "deleteFileFromList"
QT_MOC_LITERAL(15, 290, 18), // "deleteFileFromDisk"
QT_MOC_LITERAL(16, 309, 17), // "changeFileAddress"
QT_MOC_LITERAL(17, 327, 18), // "recevingSNAndFiles"
QT_MOC_LITERAL(18, 346, 19), // "showChangedListSlot"
QT_MOC_LITERAL(19, 366, 11), // "cellEntered"
QT_MOC_LITERAL(20, 378, 14) // "getFileAddress"

    },
    "playList\0changeFilesInListSignal\0\0"
    "QList<QString>\0leftBarListFilesChangeSignal\0"
    "downloadFilesChangesSignal\0sendFileAddress\0"
    "temp_removeContentSignal\0sendTempPlayInfo\0"
    "PlayArea\0temp_addFileToFolderSignal\0"
    "deleteFilesInListSignal\0"
    "on_playlist_customContextMenuRequested\0"
    "addFiles\0deleteFileFromList\0"
    "deleteFileFromDisk\0changeFileAddress\0"
    "recevingSNAndFiles\0showChangedListSlot\0"
    "cellEntered\0getFileAddress"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_playList[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   99,    2, 0x06 /* Public */,
       4,    2,  104,    2, 0x06 /* Public */,
       5,    2,  109,    2, 0x06 /* Public */,
       6,    1,  114,    2, 0x06 /* Public */,
       7,    2,  117,    2, 0x06 /* Public */,
       8,    3,  122,    2, 0x06 /* Public */,
      10,    4,  129,    2, 0x06 /* Public */,
      11,    2,  138,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      12,    1,  143,    2, 0x0a /* Public */,
      13,    0,  146,    2, 0x0a /* Public */,
      14,    0,  147,    2, 0x0a /* Public */,
      15,    0,  148,    2, 0x0a /* Public */,
      16,    0,  149,    2, 0x0a /* Public */,
      17,    2,  150,    2, 0x0a /* Public */,
      18,    2,  155,    2, 0x0a /* Public */,
      19,    2,  160,    2, 0x0a /* Public */,
      20,    2,  165,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 3,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

       0        // eod
};

void playList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<playList *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->changeFilesInListSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 1: _t->leftBarListFilesChangeSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 2: _t->downloadFilesChangesSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 3: _t->sendFileAddress((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->temp_removeContentSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->sendTempPlayInfo((*reinterpret_cast< const PlayArea(*)>(_a[1])),(*reinterpret_cast< const int(*)>(_a[2])),(*reinterpret_cast< const int(*)>(_a[3]))); break;
        case 6: _t->temp_addFileToFolderSignal((*reinterpret_cast< const int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const bool(*)>(_a[4]))); break;
        case 7: _t->deleteFilesInListSignal((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 8: _t->on_playlist_customContextMenuRequested((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 9: _t->addFiles(); break;
        case 10: _t->deleteFileFromList(); break;
        case 11: _t->deleteFileFromDisk(); break;
        case 12: _t->changeFileAddress(); break;
        case 13: _t->recevingSNAndFiles((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 14: _t->showChangedListSlot((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2]))); break;
        case 15: _t->cellEntered((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 16: _t->getFileAddress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (playList::*)(int , QList<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::changeFilesInListSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (playList::*)(int , QList<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::leftBarListFilesChangeSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (playList::*)(int , QList<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::downloadFilesChangesSignal)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (playList::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::sendFileAddress)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (playList::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::temp_removeContentSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (playList::*)(const PlayArea & , const int & , const int & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::sendTempPlayInfo)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (playList::*)(const int & , const QString & , const QString & , const bool & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::temp_addFileToFolderSignal)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (playList::*)(int , QList<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playList::deleteFilesInListSignal)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject playList::staticMetaObject = { {
    &QTableWidget::staticMetaObject,
    qt_meta_stringdata_playList.data,
    qt_meta_data_playList,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *playList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *playList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_playList.stringdata0))
        return static_cast<void*>(this);
    return QTableWidget::qt_metacast(_clname);
}

int playList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QTableWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void playList::changeFilesInListSignal(int _t1, QList<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void playList::leftBarListFilesChangeSignal(int _t1, QList<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void playList::downloadFilesChangesSignal(int _t1, QList<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void playList::sendFileAddress(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void playList::temp_removeContentSignal(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void playList::sendTempPlayInfo(const PlayArea & _t1, const int & _t2, const int & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void playList::temp_addFileToFolderSignal(const int & _t1, const QString & _t2, const QString & _t3, const bool & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void playList::deleteFilesInListSignal(int _t1, QList<QString> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
