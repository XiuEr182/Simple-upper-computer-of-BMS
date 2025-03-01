/****************************************************************************
** Meta object code from reading C++ file 'batt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../batt.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'batt.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN4battE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN4battE = QtMocHelpers::stringData(
    "batt",
    "setValue",
    "",
    "value",
    "setMinValue",
    "min",
    "setMaxValue",
    "max",
    "setRange",
    "setBorderWidth",
    "width",
    "setBorderRadio",
    "radio",
    "setInRadio",
    "setAlarmValue",
    "alarm",
    "setBorderColor",
    "color",
    "getValue",
    "getMinValue",
    "getMaxValue",
    "getAlarmValue",
    "float_t",
    "minValue",
    "maxValue",
    "alarmValue"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN4battE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       4,  125, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x0a,    5 /* Public */,
       4,    1,   95,    2, 0x0a,    7 /* Public */,
       6,    1,   98,    2, 0x0a,    9 /* Public */,
       8,    2,  101,    2, 0x0a,   11 /* Public */,
       9,    1,  106,    2, 0x0a,   14 /* Public */,
      11,    1,  109,    2, 0x0a,   16 /* Public */,
      13,    1,  112,    2, 0x0a,   18 /* Public */,
      14,    1,  115,    2, 0x0a,   20 /* Public */,
      16,    1,  118,    2, 0x0a,   22 /* Public */,
      18,    0,  121,    2, 0x0a,   24 /* Public */,
      19,    0,  122,    2, 0x0a,   25 /* Public */,
      20,    0,  123,    2, 0x0a,   26 /* Public */,
      21,    0,  124,    2, 0x0a,   27 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    7,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   15,
    QMetaType::Void, QMetaType::QColor,   17,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,

 // properties: name, type, flags, notifyId, revision
       3, 0x80000000 | 22, 0x0001510b, uint(-1), 0,
      23, QMetaType::Int, 0x00015103, uint(-1), 0,
      24, QMetaType::Int, 0x00015103, uint(-1), 0,
      25, QMetaType::Int, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject batt::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN4battE.offsetsAndSizes,
    qt_meta_data_ZN4battE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN4battE_t,
        // property 'value'
        QtPrivate::TypeAndForceComplete<float_t, std::true_type>,
        // property 'minValue'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'maxValue'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'alarmValue'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<batt, std::true_type>,
        // method 'setValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<float, std::false_type>,
        // method 'setMinValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setMaxValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setRange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setBorderWidth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setBorderRadio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setInRadio'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setAlarmValue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setBorderColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QColor, std::false_type>,
        // method 'getValue'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getMinValue'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getMaxValue'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getAlarmValue'
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void batt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<batt *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setValue((*reinterpret_cast< std::add_pointer_t<float>>(_a[1]))); break;
        case 1: _t->setMinValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->setMaxValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setRange((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->setBorderWidth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setBorderRadio((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setInRadio((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setAlarmValue((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setBorderColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 9: { int _r = _t->getValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 10: { int _r = _t->getMinValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: { int _r = _t->getMaxValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { int _r = _t->getAlarmValue();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float_t*>(_v) = _t->getValue(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->getMinValue(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->getMaxValue(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->getAlarmValue(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setValue(*reinterpret_cast< float_t*>(_v)); break;
        case 1: _t->setMinValue(*reinterpret_cast< int*>(_v)); break;
        case 2: _t->setMaxValue(*reinterpret_cast< int*>(_v)); break;
        case 3: _t->setAlarmValue(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *batt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *batt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN4battE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int batt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
