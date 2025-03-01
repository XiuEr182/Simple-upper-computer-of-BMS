/****************************************************************************
** Meta object code from reading C++ file 'myparse.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../myparse.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCharts/qlineseries.h>
#include <QtCharts/qabstractbarseries.h>
#include <QtCharts/qvbarmodelmapper.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCharts/qcandlestickseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qboxplotseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qpieseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCharts/qxyseries.h>
#include <QtCore/qabstractitemmodel.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'myparse.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN7MyParseE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN7MyParseE = QtMocHelpers::stringData(
    "MyParse",
    "showcurrent",
    "",
    "value",
    "showtotalvoltage",
    "showsoc",
    "showsop",
    "showBat1Voltage",
    "uint16_t",
    "showBat2Voltage",
    "showBat3Voltage",
    "showBat4Voltage",
    "showBat5Voltage",
    "showBat6Voltage",
    "showBat7Voltage",
    "showBat8Voltage",
    "showBat9Voltage",
    "showBat10Voltage",
    "showBat11Voltage",
    "showBat12Voltage",
    "showBat1Temp",
    "showBat2Temp",
    "showBat3Temp",
    "showBat4Temp",
    "showBat5Temp",
    "showBat6Temp",
    "showBat7Temp",
    "showBat8Temp",
    "getCanDataSlot",
    "PVCI_CAN_OBJ",
    "objs",
    "count"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN7MyParseE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      25,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      24,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  164,    2, 0x06,    1 /* Public */,
       4,    1,  167,    2, 0x06,    3 /* Public */,
       5,    1,  170,    2, 0x06,    5 /* Public */,
       6,    1,  173,    2, 0x06,    7 /* Public */,
       7,    1,  176,    2, 0x06,    9 /* Public */,
       9,    1,  179,    2, 0x06,   11 /* Public */,
      10,    1,  182,    2, 0x06,   13 /* Public */,
      11,    1,  185,    2, 0x06,   15 /* Public */,
      12,    1,  188,    2, 0x06,   17 /* Public */,
      13,    1,  191,    2, 0x06,   19 /* Public */,
      14,    1,  194,    2, 0x06,   21 /* Public */,
      15,    1,  197,    2, 0x06,   23 /* Public */,
      16,    1,  200,    2, 0x06,   25 /* Public */,
      17,    1,  203,    2, 0x06,   27 /* Public */,
      18,    1,  206,    2, 0x06,   29 /* Public */,
      19,    1,  209,    2, 0x06,   31 /* Public */,
      20,    1,  212,    2, 0x06,   33 /* Public */,
      21,    1,  215,    2, 0x06,   35 /* Public */,
      22,    1,  218,    2, 0x06,   37 /* Public */,
      23,    1,  221,    2, 0x06,   39 /* Public */,
      24,    1,  224,    2, 0x06,   41 /* Public */,
      25,    1,  227,    2, 0x06,   43 /* Public */,
      26,    1,  230,    2, 0x06,   45 /* Public */,
      27,    1,  233,    2, 0x06,   47 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      28,    2,  236,    2, 0x0a,   49 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,
    QMetaType::Void, 0x80000000 | 8,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 29, QMetaType::Int,   30,   31,

       0        // eod
};

Q_CONSTINIT const QMetaObject MyParse::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN7MyParseE.offsetsAndSizes,
    qt_meta_data_ZN7MyParseE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN7MyParseE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MyParse, std::true_type>,
        // method 'showcurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'showtotalvoltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'showsoc'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'showsop'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'showBat1Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat2Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat3Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat4Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat5Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat6Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat7Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat8Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat9Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat10Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat11Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat12Voltage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat1Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat2Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat3Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat4Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat5Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat6Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat7Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'showBat8Temp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<uint16_t, std::false_type>,
        // method 'getCanDataSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PVCI_CAN_OBJ, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void MyParse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<MyParse *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->showcurrent((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->showtotalvoltage((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 2: _t->showsoc((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 3: _t->showsop((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 4: _t->showBat1Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 5: _t->showBat2Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 6: _t->showBat3Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 7: _t->showBat4Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 8: _t->showBat5Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 9: _t->showBat6Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 10: _t->showBat7Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 11: _t->showBat8Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 12: _t->showBat9Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 13: _t->showBat10Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 14: _t->showBat11Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 15: _t->showBat12Voltage((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 16: _t->showBat1Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 17: _t->showBat2Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 18: _t->showBat3Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 19: _t->showBat4Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 20: _t->showBat5Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 21: _t->showBat6Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 22: _t->showBat7Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 23: _t->showBat8Temp((*reinterpret_cast< std::add_pointer_t<uint16_t>>(_a[1]))); break;
        case 24: _t->getCanDataSlot((*reinterpret_cast< std::add_pointer_t<PVCI_CAN_OBJ>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (MyParse::*)(float );
            if (_q_method_type _q_method = &MyParse::showcurrent; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(float );
            if (_q_method_type _q_method = &MyParse::showtotalvoltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(float );
            if (_q_method_type _q_method = &MyParse::showsoc; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(float );
            if (_q_method_type _q_method = &MyParse::showsop; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat1Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat2Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat3Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat4Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat5Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat6Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat7Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat8Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat9Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat10Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat11Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat12Voltage; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat1Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat2Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat3Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat4Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat5Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat6Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat7Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _q_method_type = void (MyParse::*)(uint16_t );
            if (_q_method_type _q_method = &MyParse::showBat8Temp; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
    }
}

const QMetaObject *MyParse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MyParse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN7MyParseE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int MyParse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 25)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 25;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 25)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 25;
    }
    return _id;
}

// SIGNAL 0
void MyParse::showcurrent(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MyParse::showtotalvoltage(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MyParse::showsoc(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MyParse::showsop(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MyParse::showBat1Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MyParse::showBat2Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MyParse::showBat3Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MyParse::showBat4Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MyParse::showBat5Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MyParse::showBat6Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MyParse::showBat7Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MyParse::showBat8Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MyParse::showBat9Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MyParse::showBat10Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MyParse::showBat11Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MyParse::showBat12Voltage(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MyParse::showBat1Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MyParse::showBat2Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MyParse::showBat3Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MyParse::showBat4Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MyParse::showBat5Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MyParse::showBat6Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MyParse::showBat7Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MyParse::showBat8Temp(uint16_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}
QT_WARNING_POP
