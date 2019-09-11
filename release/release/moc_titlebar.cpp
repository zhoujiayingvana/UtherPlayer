/****************************************************************************
** Meta object code from reading C++ file 'titlebar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../titlebar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'titlebar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TitleBar_t {
    QByteArrayData data[19];
    char stringdata0[298];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TitleBar_t qt_meta_stringdata_TitleBar = {
    {
QT_MOC_LITERAL(0, 0, 8), // "TitleBar"
QT_MOC_LITERAL(1, 9, 14), // "systemTrayMode"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 8), // "miniMode"
QT_MOC_LITERAL(4, 34, 16), // "openFile_clicked"
QT_MOC_LITERAL(5, 51, 12), // "sendInputStr"
QT_MOC_LITERAL(6, 64, 16), // "tempSendInputStr"
QT_MOC_LITERAL(7, 81, 21), // "on_miniButton_clicked"
QT_MOC_LITERAL(8, 103, 21), // "on_fileButton_clicked"
QT_MOC_LITERAL(9, 125, 25), // "on_minimizeButton_clicked"
QT_MOC_LITERAL(10, 151, 25), // "on_maximizeButton_clicked"
QT_MOC_LITERAL(11, 177, 22), // "on_closeButton_clicked"
QT_MOC_LITERAL(12, 200, 25), // "on_SettingsButton_clicked"
QT_MOC_LITERAL(13, 226, 14), // "changeFontType"
QT_MOC_LITERAL(14, 241, 6), // "QFont*"
QT_MOC_LITERAL(15, 248, 4), // "font"
QT_MOC_LITERAL(16, 253, 22), // "changeOpenFileShortcut"
QT_MOC_LITERAL(17, 276, 3), // "str"
QT_MOC_LITERAL(18, 280, 17) // "changeCloseStatus"

    },
    "TitleBar\0systemTrayMode\0\0miniMode\0"
    "openFile_clicked\0sendInputStr\0"
    "tempSendInputStr\0on_miniButton_clicked\0"
    "on_fileButton_clicked\0on_minimizeButton_clicked\0"
    "on_maximizeButton_clicked\0"
    "on_closeButton_clicked\0on_SettingsButton_clicked\0"
    "changeFontType\0QFont*\0font\0"
    "changeOpenFileShortcut\0str\0changeCloseStatus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TitleBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,
       3,    0,   85,    2, 0x06 /* Public */,
       4,    0,   86,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   90,    2, 0x0a /* Public */,
       7,    0,   91,    2, 0x0a /* Public */,
       8,    0,   92,    2, 0x0a /* Public */,
       9,    0,   93,    2, 0x0a /* Public */,
      10,    0,   94,    2, 0x0a /* Public */,
      11,    0,   95,    2, 0x0a /* Public */,
      12,    0,   96,    2, 0x0a /* Public */,
      13,    1,   97,    2, 0x0a /* Public */,
      16,    1,  100,    2, 0x0a /* Public */,
      18,    1,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void TitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->systemTrayMode(); break;
        case 1: _t->miniMode(); break;
        case 2: _t->openFile_clicked(); break;
        case 3: _t->sendInputStr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->tempSendInputStr(); break;
        case 5: _t->on_miniButton_clicked(); break;
        case 6: _t->on_fileButton_clicked(); break;
        case 7: _t->on_minimizeButton_clicked(); break;
        case 8: _t->on_maximizeButton_clicked(); break;
        case 9: _t->on_closeButton_clicked(); break;
        case 10: _t->on_SettingsButton_clicked(); break;
        case 11: _t->changeFontType((*reinterpret_cast< QFont*(*)>(_a[1]))); break;
        case 12: _t->changeOpenFileShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 13: _t->changeCloseStatus((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::systemTrayMode)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::miniMode)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::openFile_clicked)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TitleBar::*)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TitleBar::sendInputStr)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TitleBar::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TitleBar.data,
    qt_meta_data_TitleBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TitleBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void TitleBar::systemTrayMode()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TitleBar::miniMode()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TitleBar::openFile_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TitleBar::sendInputStr(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
