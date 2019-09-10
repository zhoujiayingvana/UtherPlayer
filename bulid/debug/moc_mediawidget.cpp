/****************************************************************************
** Meta object code from reading C++ file 'mediawidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.13.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../mediawidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mediawidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.13.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MediaWidget_t {
    QByteArrayData data[11];
    char stringdata0[150];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MediaWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MediaWidget_t qt_meta_stringdata_MediaWidget = {
    {
QT_MOC_LITERAL(0, 0, 11), // "MediaWidget"
QT_MOC_LITERAL(1, 12, 25), // "full_screenButton_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 13), // "bottomBarHide"
QT_MOC_LITERAL(4, 53, 16), // "volumeWidgetHide"
QT_MOC_LITERAL(5, 70, 13), // "bottomBarShow"
QT_MOC_LITERAL(6, 84, 10), // "wheelMoved"
QT_MOC_LITERAL(7, 95, 12), // "QWheelEvent*"
QT_MOC_LITERAL(8, 108, 13), // "hideBottomBar"
QT_MOC_LITERAL(9, 122, 13), // "mediaLuminAdd"
QT_MOC_LITERAL(10, 136, 13) // "mediaLuminSub"

    },
    "MediaWidget\0full_screenButton_clicked\0"
    "\0bottomBarHide\0volumeWidgetHide\0"
    "bottomBarShow\0wheelMoved\0QWheelEvent*\0"
    "hideBottomBar\0mediaLuminAdd\0mediaLuminSub"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MediaWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,
       3,    0,   55,    2, 0x06 /* Public */,
       4,    0,   56,    2, 0x06 /* Public */,
       5,    0,   57,    2, 0x06 /* Public */,
       6,    1,   58,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   61,    2, 0x0a /* Public */,
       9,    0,   62,    2, 0x0a /* Public */,
      10,    0,   63,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MediaWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MediaWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->full_screenButton_clicked(); break;
        case 1: _t->bottomBarHide(); break;
        case 2: _t->volumeWidgetHide(); break;
        case 3: _t->bottomBarShow(); break;
        case 4: _t->wheelMoved((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 5: _t->hideBottomBar(); break;
        case 6: _t->mediaLuminAdd(); break;
        case 7: _t->mediaLuminSub(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MediaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaWidget::full_screenButton_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MediaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaWidget::bottomBarHide)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (MediaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaWidget::volumeWidgetHide)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (MediaWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaWidget::bottomBarShow)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (MediaWidget::*)(QWheelEvent * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MediaWidget::wheelMoved)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MediaWidget::staticMetaObject = { {
    &QVideoWidget::staticMetaObject,
    qt_meta_stringdata_MediaWidget.data,
    qt_meta_data_MediaWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MediaWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MediaWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MediaWidget.stringdata0))
        return static_cast<void*>(this);
    return QVideoWidget::qt_metacast(_clname);
}

int MediaWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QVideoWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void MediaWidget::full_screenButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MediaWidget::bottomBarHide()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void MediaWidget::volumeWidgetHide()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void MediaWidget::bottomBarShow()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MediaWidget::wheelMoved(QWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
