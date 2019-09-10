/****************************************************************************
** Meta object code from reading C++ file 'controller.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../util/controller.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'controller.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Controller_t {
    QByteArrayData data[38];
    char stringdata0[450];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Controller_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Controller_t qt_meta_stringdata_Controller = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Controller"
QT_MOC_LITERAL(1, 11, 15), // "needGetDuration"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 15), // "needGetPosition"
QT_MOC_LITERAL(4, 44, 13), // "needGetStatus"
QT_MOC_LITERAL(5, 58, 12), // "needGetOrder"
QT_MOC_LITERAL(6, 71, 18), // "returnInitDuration"
QT_MOC_LITERAL(7, 90, 8), // "needPlay"
QT_MOC_LITERAL(8, 99, 14), // "QMediaContent*"
QT_MOC_LITERAL(9, 114, 7), // "content"
QT_MOC_LITERAL(10, 122, 15), // "needRestorePlay"
QT_MOC_LITERAL(11, 138, 14), // "needPauseVideo"
QT_MOC_LITERAL(12, 153, 18), // "needTerminateVideo"
QT_MOC_LITERAL(13, 172, 16), // "needSeekPosition"
QT_MOC_LITERAL(14, 189, 13), // "needSetVolume"
QT_MOC_LITERAL(15, 203, 3), // "vol"
QT_MOC_LITERAL(16, 207, 12), // "needSetMuted"
QT_MOC_LITERAL(17, 220, 1), // "m"
QT_MOC_LITERAL(18, 222, 19), // "needSetPlaybackRate"
QT_MOC_LITERAL(19, 242, 4), // "rate"
QT_MOC_LITERAL(20, 247, 8), // "needJump"
QT_MOC_LITERAL(21, 256, 6), // "second"
QT_MOC_LITERAL(22, 263, 13), // "needCutScreen"
QT_MOC_LITERAL(23, 277, 3), // "WId"
QT_MOC_LITERAL(24, 281, 3), // "wId"
QT_MOC_LITERAL(25, 285, 8), // "fileName"
QT_MOC_LITERAL(26, 294, 8), // "filePath"
QT_MOC_LITERAL(27, 303, 3), // "fmt"
QT_MOC_LITERAL(28, 307, 3), // "qua"
QT_MOC_LITERAL(29, 311, 12), // "needSetOrder"
QT_MOC_LITERAL(30, 324, 9), // "PlayOrder"
QT_MOC_LITERAL(31, 334, 15), // "receivePosition"
QT_MOC_LITERAL(32, 350, 15), // "receiveDuration"
QT_MOC_LITERAL(33, 366, 19), // "receiveInitDuration"
QT_MOC_LITERAL(34, 386, 13), // "receiveStatus"
QT_MOC_LITERAL(35, 400, 19), // "QMediaPlayer::State"
QT_MOC_LITERAL(36, 420, 16), // "receiveScreenCut"
QT_MOC_LITERAL(37, 437, 12) // "receiveOrder"

    },
    "Controller\0needGetDuration\0\0needGetPosition\0"
    "needGetStatus\0needGetOrder\0"
    "returnInitDuration\0needPlay\0QMediaContent*\0"
    "content\0needRestorePlay\0needPauseVideo\0"
    "needTerminateVideo\0needSeekPosition\0"
    "needSetVolume\0vol\0needSetMuted\0m\0"
    "needSetPlaybackRate\0rate\0needJump\0"
    "second\0needCutScreen\0WId\0wId\0fileName\0"
    "filePath\0fmt\0qua\0needSetOrder\0PlayOrder\0"
    "receivePosition\0receiveDuration\0"
    "receiveInitDuration\0receiveStatus\0"
    "QMediaPlayer::State\0receiveScreenCut\0"
    "receiveOrder"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Controller[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      16,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    0,  125,    2, 0x06 /* Public */,
       4,    0,  126,    2, 0x06 /* Public */,
       5,    0,  127,    2, 0x06 /* Public */,
       6,    1,  128,    2, 0x06 /* Public */,
       7,    1,  131,    2, 0x06 /* Public */,
      10,    0,  134,    2, 0x06 /* Public */,
      11,    0,  135,    2, 0x06 /* Public */,
      12,    0,  136,    2, 0x06 /* Public */,
      13,    1,  137,    2, 0x06 /* Public */,
      14,    1,  140,    2, 0x06 /* Public */,
      16,    1,  143,    2, 0x06 /* Public */,
      18,    1,  146,    2, 0x06 /* Public */,
      20,    1,  149,    2, 0x06 /* Public */,
      22,    5,  152,    2, 0x06 /* Public */,
      29,    1,  163,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      31,    1,  166,    2, 0x0a /* Public */,
      32,    1,  169,    2, 0x0a /* Public */,
      33,    1,  172,    2, 0x0a /* Public */,
      34,    1,  175,    2, 0x0a /* Public */,
      36,    1,  178,    2, 0x0a /* Public */,
      37,    1,  181,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::Bool,   17,
    QMetaType::Void, QMetaType::QReal,   19,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::Int,   24,   25,   26,   27,   28,
    QMetaType::Void, 0x80000000 | 30,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 35,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 30,    2,

       0        // eod
};

void Controller::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Controller *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->needGetDuration(); break;
        case 1: _t->needGetPosition(); break;
        case 2: _t->needGetStatus(); break;
        case 3: _t->needGetOrder(); break;
        case 4: _t->returnInitDuration((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 5: _t->needPlay((*reinterpret_cast< QMediaContent*(*)>(_a[1]))); break;
        case 6: _t->needRestorePlay(); break;
        case 7: _t->needPauseVideo(); break;
        case 8: _t->needTerminateVideo(); break;
        case 9: _t->needSeekPosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 10: _t->needSetVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: _t->needSetMuted((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->needSetPlaybackRate((*reinterpret_cast< qreal(*)>(_a[1]))); break;
        case 13: _t->needJump((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->needCutScreen((*reinterpret_cast< WId(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 15: _t->needSetOrder((*reinterpret_cast< PlayOrder(*)>(_a[1]))); break;
        case 16: _t->receivePosition((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 17: _t->receiveDuration((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 18: _t->receiveInitDuration((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 19: _t->receiveStatus((*reinterpret_cast< QMediaPlayer::State(*)>(_a[1]))); break;
        case 20: _t->receiveScreenCut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 21: _t->receiveOrder((*reinterpret_cast< PlayOrder(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QMediaPlayer::State >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needGetDuration)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needGetPosition)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needGetStatus)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needGetOrder)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Controller::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::returnInitDuration)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Controller::*)(QMediaContent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needPlay)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needRestorePlay)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needPauseVideo)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Controller::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needTerminateVideo)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Controller::*)(qint64 );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needSeekPosition)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Controller::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needSetVolume)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Controller::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needSetMuted)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Controller::*)(qreal );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needSetPlaybackRate)) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Controller::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needJump)) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Controller::*)(WId , QString , QString , QString , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needCutScreen)) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Controller::*)(PlayOrder );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Controller::needSetOrder)) {
                *result = 15;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Controller::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Controller.data,
    qt_meta_data_Controller,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Controller::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Controller::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Controller.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Controller::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Controller::needGetDuration()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Controller::needGetPosition()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Controller::needGetStatus()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Controller::needGetOrder()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Controller::returnInitDuration(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void Controller::needPlay(QMediaContent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Controller::needRestorePlay()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void Controller::needPauseVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Controller::needTerminateVideo()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Controller::needSeekPosition(qint64 _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void Controller::needSetVolume(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void Controller::needSetMuted(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void Controller::needSetPlaybackRate(qreal _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void Controller::needJump(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void Controller::needCutScreen(WId _t1, QString _t2, QString _t3, QString _t4, int _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void Controller::needSetOrder(PlayOrder _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
