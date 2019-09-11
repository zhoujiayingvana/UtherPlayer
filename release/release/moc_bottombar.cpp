/****************************************************************************
** Meta object code from reading C++ file 'bottombar.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../bottombar.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bottombar.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BottomBar_t {
    QByteArrayData data[55];
    char stringdata0[1071];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BottomBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BottomBar_t qt_meta_stringdata_BottomBar = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BottomBar"
QT_MOC_LITERAL(1, 10, 25), // "full_screenButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 13), // "volumeChanged"
QT_MOC_LITERAL(4, 51, 11), // "wheelMoving"
QT_MOC_LITERAL(5, 63, 17), // "currentPosChanged"
QT_MOC_LITERAL(6, 81, 18), // "lastButton_clicked"
QT_MOC_LITERAL(7, 100, 19), // "pauseButton_clicked"
QT_MOC_LITERAL(8, 120, 18), // "nextButton_clicked"
QT_MOC_LITERAL(9, 139, 18), // "stopButton_clicked"
QT_MOC_LITERAL(10, 158, 12), // "needPosition"
QT_MOC_LITERAL(11, 171, 14), // "changePlayMode"
QT_MOC_LITERAL(12, 186, 9), // "PlayOrder"
QT_MOC_LITERAL(13, 196, 12), // "videoPlaying"
QT_MOC_LITERAL(14, 209, 12), // "audioPlaying"
QT_MOC_LITERAL(15, 222, 19), // "sigChangeMediaStyle"
QT_MOC_LITERAL(16, 242, 26), // "on_playSlider_valueChanged"
QT_MOC_LITERAL(17, 269, 21), // "on_lastButton_clicked"
QT_MOC_LITERAL(18, 291, 22), // "on_pauseButton_clicked"
QT_MOC_LITERAL(19, 314, 13), // "timePassingBy"
QT_MOC_LITERAL(20, 328, 18), // "setPlaySliderValue"
QT_MOC_LITERAL(21, 347, 21), // "on_nextButton_clicked"
QT_MOC_LITERAL(22, 369, 21), // "on_stopButton_clicked"
QT_MOC_LITERAL(23, 391, 25), // "on_playModeButton_clicked"
QT_MOC_LITERAL(24, 417, 17), // "changePauseButton"
QT_MOC_LITERAL(25, 435, 20), // "changePlaySliderPlus"
QT_MOC_LITERAL(26, 456, 23), // "on_volumeButton_clicked"
QT_MOC_LITERAL(27, 480, 28), // "on_volumeSlider_valueChanged"
QT_MOC_LITERAL(28, 509, 19), // "rcvSwitchModeButton"
QT_MOC_LITERAL(29, 529, 10), // "MediaType&"
QT_MOC_LITERAL(30, 540, 10), // "_mediaType"
QT_MOC_LITERAL(31, 551, 21), // "volumeWidgetDetection"
QT_MOC_LITERAL(32, 573, 25), // "definitionWidgetDetection"
QT_MOC_LITERAL(33, 599, 23), // "settingsWidgetDetection"
QT_MOC_LITERAL(34, 623, 28), // "on_full_screenButton_clicked"
QT_MOC_LITERAL(35, 652, 10), // "wheelMoved"
QT_MOC_LITERAL(36, 663, 12), // "QWheelEvent*"
QT_MOC_LITERAL(37, 676, 12), // "changeVolume"
QT_MOC_LITERAL(38, 689, 16), // "hideVolumeWidget"
QT_MOC_LITERAL(39, 706, 20), // "changeActionShortcut"
QT_MOC_LITERAL(40, 727, 18), // "changeLastShortcut"
QT_MOC_LITERAL(41, 746, 18), // "changeNextShortcut"
QT_MOC_LITERAL(42, 765, 23), // "changeCloseFileShortcut"
QT_MOC_LITERAL(43, 789, 25), // "changeVolumeOnOffShortcut"
QT_MOC_LITERAL(44, 815, 22), // "changeMultiplyingPower"
QT_MOC_LITERAL(45, 838, 16), // "changeDefinition"
QT_MOC_LITERAL(46, 855, 20), // "volumeSliderValueAdd"
QT_MOC_LITERAL(47, 876, 20), // "volumeSliderValueSub"
QT_MOC_LITERAL(48, 897, 23), // "quickMovePlaySliderPlus"
QT_MOC_LITERAL(49, 921, 24), // "quickMovePlaySliderMinus"
QT_MOC_LITERAL(50, 946, 12), // "setTotalTime"
QT_MOC_LITERAL(51, 959, 15), // "clearPlaySlider"
QT_MOC_LITERAL(52, 975, 31), // "on_p360DefinitionButton_clicked"
QT_MOC_LITERAL(53, 1007, 31), // "on_p480DefinitionButton_clicked"
QT_MOC_LITERAL(54, 1039, 31) // "on_p720DefinitionButton_clicked"

    },
    "BottomBar\0full_screenButton_clicked\0"
    "\0volumeChanged\0wheelMoving\0currentPosChanged\0"
    "lastButton_clicked\0pauseButton_clicked\0"
    "nextButton_clicked\0stopButton_clicked\0"
    "needPosition\0changePlayMode\0PlayOrder\0"
    "videoPlaying\0audioPlaying\0sigChangeMediaStyle\0"
    "on_playSlider_valueChanged\0"
    "on_lastButton_clicked\0on_pauseButton_clicked\0"
    "timePassingBy\0setPlaySliderValue\0"
    "on_nextButton_clicked\0on_stopButton_clicked\0"
    "on_playModeButton_clicked\0changePauseButton\0"
    "changePlaySliderPlus\0on_volumeButton_clicked\0"
    "on_volumeSlider_valueChanged\0"
    "rcvSwitchModeButton\0MediaType&\0"
    "_mediaType\0volumeWidgetDetection\0"
    "definitionWidgetDetection\0"
    "settingsWidgetDetection\0"
    "on_full_screenButton_clicked\0wheelMoved\0"
    "QWheelEvent*\0changeVolume\0hideVolumeWidget\0"
    "changeActionShortcut\0changeLastShortcut\0"
    "changeNextShortcut\0changeCloseFileShortcut\0"
    "changeVolumeOnOffShortcut\0"
    "changeMultiplyingPower\0changeDefinition\0"
    "volumeSliderValueAdd\0volumeSliderValueSub\0"
    "quickMovePlaySliderPlus\0"
    "quickMovePlaySliderMinus\0setTotalTime\0"
    "clearPlaySlider\0on_p360DefinitionButton_clicked\0"
    "on_p480DefinitionButton_clicked\0"
    "on_p720DefinitionButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BottomBar[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      50,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  264,    2, 0x06 /* Public */,
       3,    1,  265,    2, 0x06 /* Public */,
       4,    2,  268,    2, 0x06 /* Public */,
       5,    1,  273,    2, 0x06 /* Public */,
       6,    0,  276,    2, 0x06 /* Public */,
       7,    0,  277,    2, 0x06 /* Public */,
       8,    0,  278,    2, 0x06 /* Public */,
       9,    0,  279,    2, 0x06 /* Public */,
      10,    0,  280,    2, 0x06 /* Public */,
      11,    1,  281,    2, 0x06 /* Public */,
      13,    0,  284,    2, 0x06 /* Public */,
      14,    0,  285,    2, 0x06 /* Public */,
      15,    1,  286,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      16,    1,  289,    2, 0x0a /* Public */,
      17,    0,  292,    2, 0x0a /* Public */,
      18,    0,  293,    2, 0x0a /* Public */,
      19,    0,  294,    2, 0x0a /* Public */,
      20,    1,  295,    2, 0x0a /* Public */,
      21,    0,  298,    2, 0x0a /* Public */,
      22,    0,  299,    2, 0x0a /* Public */,
      23,    0,  300,    2, 0x0a /* Public */,
      11,    1,  301,    2, 0x0a /* Public */,
      24,    1,  304,    2, 0x0a /* Public */,
      25,    1,  307,    2, 0x0a /* Public */,
      26,    0,  310,    2, 0x0a /* Public */,
      27,    1,  311,    2, 0x0a /* Public */,
      28,    1,  314,    2, 0x0a /* Public */,
      31,    0,  317,    2, 0x0a /* Public */,
      32,    0,  318,    2, 0x0a /* Public */,
      33,    0,  319,    2, 0x0a /* Public */,
      34,    0,  320,    2, 0x0a /* Public */,
      35,    1,  321,    2, 0x0a /* Public */,
      37,    1,  324,    2, 0x0a /* Public */,
      38,    0,  327,    2, 0x0a /* Public */,
      39,    1,  328,    2, 0x0a /* Public */,
      40,    1,  331,    2, 0x0a /* Public */,
      41,    1,  334,    2, 0x0a /* Public */,
      42,    1,  337,    2, 0x0a /* Public */,
      43,    1,  340,    2, 0x0a /* Public */,
      44,    1,  343,    2, 0x0a /* Public */,
      45,    1,  346,    2, 0x0a /* Public */,
      46,    0,  349,    2, 0x0a /* Public */,
      47,    0,  350,    2, 0x0a /* Public */,
      48,    0,  351,    2, 0x0a /* Public */,
      49,    0,  352,    2, 0x0a /* Public */,
      50,    1,  353,    2, 0x0a /* Public */,
      51,    0,  356,    2, 0x0a /* Public */,
      52,    0,  357,    2, 0x0a /* Public */,
      53,    0,  358,    2, 0x0a /* Public */,
      54,    0,  359,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, 0x80000000 | 29,   30,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 36,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BottomBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BottomBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->full_screenButton_clicked(); break;
        case 1: _t->volumeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->wheelMoving((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->currentPosChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->lastButton_clicked(); break;
        case 5: _t->pauseButton_clicked(); break;
        case 6: _t->nextButton_clicked(); break;
        case 7: _t->stopButton_clicked(); break;
        case 8: _t->needPosition(); break;
        case 9: _t->changePlayMode((*reinterpret_cast< PlayOrder(*)>(_a[1]))); break;
        case 10: _t->videoPlaying(); break;
        case 11: _t->audioPlaying(); break;
        case 12: _t->sigChangeMediaStyle((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_playSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: _t->on_lastButton_clicked(); break;
        case 15: _t->on_pauseButton_clicked(); break;
        case 16: _t->timePassingBy(); break;
        case 17: _t->setPlaySliderValue((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 18: _t->on_nextButton_clicked(); break;
        case 19: _t->on_stopButton_clicked(); break;
        case 20: _t->on_playModeButton_clicked(); break;
        case 21: _t->changePlayMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: _t->changePauseButton((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->changePlaySliderPlus((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 24: _t->on_volumeButton_clicked(); break;
        case 25: _t->on_volumeSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 26: _t->rcvSwitchModeButton((*reinterpret_cast< MediaType(*)>(_a[1]))); break;
        case 27: _t->volumeWidgetDetection(); break;
        case 28: _t->definitionWidgetDetection(); break;
        case 29: _t->settingsWidgetDetection(); break;
        case 30: _t->on_full_screenButton_clicked(); break;
        case 31: _t->wheelMoved((*reinterpret_cast< QWheelEvent*(*)>(_a[1]))); break;
        case 32: _t->changeVolume((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 33: _t->hideVolumeWidget(); break;
        case 34: _t->changeActionShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 35: _t->changeLastShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->changeNextShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 37: _t->changeCloseFileShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 38: _t->changeVolumeOnOffShortcut((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 39: _t->changeMultiplyingPower((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 40: _t->changeDefinition((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 41: _t->volumeSliderValueAdd(); break;
        case 42: _t->volumeSliderValueSub(); break;
        case 43: _t->quickMovePlaySliderPlus(); break;
        case 44: _t->quickMovePlaySliderMinus(); break;
        case 45: _t->setTotalTime((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 46: _t->clearPlaySlider(); break;
        case 47: _t->on_p360DefinitionButton_clicked(); break;
        case 48: _t->on_p480DefinitionButton_clicked(); break;
        case 49: _t->on_p720DefinitionButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::full_screenButton_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::volumeChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::wheelMoving)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::currentPosChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::lastButton_clicked)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::pauseButton_clicked)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::nextButton_clicked)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::stopButton_clicked)) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::needPosition)) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)(PlayOrder );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::changePlayMode)) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::videoPlaying)) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::audioPlaying)) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (BottomBar::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&BottomBar::sigChangeMediaStyle)) {
                *result = 12;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject BottomBar::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_BottomBar.data,
    qt_meta_data_BottomBar,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BottomBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BottomBar::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BottomBar.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int BottomBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 50)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 50;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 50)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 50;
    }
    return _id;
}

// SIGNAL 0
void BottomBar::full_screenButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void BottomBar::volumeChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void BottomBar::wheelMoving(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void BottomBar::currentPosChanged(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void BottomBar::lastButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void BottomBar::pauseButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void BottomBar::nextButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void BottomBar::stopButton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void BottomBar::needPosition()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void BottomBar::changePlayMode(PlayOrder _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void BottomBar::videoPlaying()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void BottomBar::audioPlaying()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void BottomBar::sigChangeMediaStyle(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
