/****************************************************************************
** Meta object code from reading C++ file 'playlistbtn.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../playlistbtn.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'playlistbtn.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_playlistBtn_t {
    QByteArrayData data[18];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_playlistBtn_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_playlistBtn_t qt_meta_stringdata_playlistBtn = {
    {
QT_MOC_LITERAL(0, 0, 11), // "playlistBtn"
QT_MOC_LITERAL(1, 12, 27), // "showOrHideListContentSignal"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 23), // "hideOtherContentsSignal"
QT_MOC_LITERAL(4, 65, 17), // "deleteListRequest"
QT_MOC_LITERAL(5, 83, 19), // "singleClickedSignal"
QT_MOC_LITERAL(6, 103, 19), // "doubleClickedSignal"
QT_MOC_LITERAL(7, 123, 8), // "givingSN"
QT_MOC_LITERAL(8, 132, 11), // "wantingName"
QT_MOC_LITERAL(9, 144, 21), // "sendChangedFolderName"
QT_MOC_LITERAL(10, 166, 10), // "renameSlot"
QT_MOC_LITERAL(11, 177, 14), // "deleteListSlot"
QT_MOC_LITERAL(12, 192, 12), // "showListSlot"
QT_MOC_LITERAL(13, 205, 15), // "hideContentSlot"
QT_MOC_LITERAL(14, 221, 15), // "displayListSlot"
QT_MOC_LITERAL(15, 237, 19), // "editingFinishedSlot"
QT_MOC_LITERAL(16, 257, 20), // "listNameCallMenuSlot"
QT_MOC_LITERAL(17, 278, 17) // "doubleClickedSlot"

    },
    "playlistBtn\0showOrHideListContentSignal\0"
    "\0hideOtherContentsSignal\0deleteListRequest\0"
    "singleClickedSignal\0doubleClickedSignal\0"
    "givingSN\0wantingName\0sendChangedFolderName\0"
    "renameSlot\0deleteListSlot\0showListSlot\0"
    "hideContentSlot\0displayListSlot\0"
    "editingFinishedSlot\0listNameCallMenuSlot\0"
    "doubleClickedSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_playlistBtn[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x06 /* Public */,
       3,    1,   97,    2, 0x06 /* Public */,
       4,    0,  100,    2, 0x06 /* Public */,
       5,    0,  101,    2, 0x06 /* Public */,
       6,    0,  102,    2, 0x06 /* Public */,
       7,    1,  103,    2, 0x06 /* Public */,
       8,    1,  106,    2, 0x06 /* Public */,
       9,    2,  109,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x0a /* Public */,
      15,    0,  119,    2, 0x0a /* Public */,
      16,    1,  120,    2, 0x0a /* Public */,
      17,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,

       0        // eod
};

void playlistBtn::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<playlistBtn *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showOrHideListContentSignal((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->hideOtherContentsSignal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->deleteListRequest(); break;
        case 3: _t->singleClickedSignal(); break;
        case 4: _t->doubleClickedSignal(); break;
        case 5: _t->givingSN((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->wantingName((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->sendChangedFolderName((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 8: _t->renameSlot(); break;
        case 9: _t->deleteListSlot(); break;
        case 10: _t->showListSlot(); break;
        case 11: _t->hideContentSlot(); break;
        case 12: _t->displayListSlot(); break;
        case 13: _t->editingFinishedSlot(); break;
        case 14: _t->listNameCallMenuSlot((*reinterpret_cast< QPoint(*)>(_a[1]))); break;
        case 15: _t->doubleClickedSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (playlistBtn::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::showOrHideListContentSignal)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (playlistBtn::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::hideOtherContentsSignal)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (playlistBtn::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::deleteListRequest)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (playlistBtn::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::singleClickedSignal)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (playlistBtn::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::doubleClickedSignal)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (playlistBtn::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::givingSN)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (playlistBtn::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::wantingName)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (playlistBtn::*)(int , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&playlistBtn::sendChangedFolderName)) {
                *result = 7;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject playlistBtn::staticMetaObject = { {
    &QPushButton::staticMetaObject,
    qt_meta_stringdata_playlistBtn.data,
    qt_meta_data_playlistBtn,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *playlistBtn::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *playlistBtn::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_playlistBtn.stringdata0))
        return static_cast<void*>(this);
    return QPushButton::qt_metacast(_clname);
}

int playlistBtn::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPushButton::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void playlistBtn::showOrHideListContentSignal(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void playlistBtn::hideOtherContentsSignal(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void playlistBtn::deleteListRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void playlistBtn::singleClickedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void playlistBtn::doubleClickedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void playlistBtn::givingSN(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void playlistBtn::wantingName(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void playlistBtn::sendChangedFolderName(int _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE