/****************************************************************************
** Meta object code from reading C++ file 'buy_goods.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../supermarket_management/buy_goods.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'buy_goods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_buy_goods_t {
    QByteArrayData data[8];
    char stringdata[102];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_buy_goods_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_buy_goods_t qt_meta_stringdata_buy_goods = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 2),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 21),
QT_MOC_LITERAL(4, 36, 10),
QT_MOC_LITERAL(5, 47, 20),
QT_MOC_LITERAL(6, 68, 14),
QT_MOC_LITERAL(7, 83, 18)
    },
    "buy_goods\0re\0\0on_btn_cancel_clicked\0"
    "renew_file\0on_btn_query_clicked\0"
    "read_from_flie\0on_btn_buy_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_buy_goods[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void buy_goods::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        buy_goods *_t = static_cast<buy_goods *>(_o);
        switch (_id) {
        case 0: _t->re(); break;
        case 1: _t->on_btn_cancel_clicked(); break;
        case 2: { int _r = _t->renew_file();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 3: _t->on_btn_query_clicked(); break;
        case 4: { int _r = _t->read_from_flie();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->on_btn_buy_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (buy_goods::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&buy_goods::re)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject buy_goods::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_buy_goods.data,
      qt_meta_data_buy_goods,  qt_static_metacall, 0, 0}
};


const QMetaObject *buy_goods::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *buy_goods::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_buy_goods.stringdata))
        return static_cast<void*>(const_cast< buy_goods*>(this));
    return QDialog::qt_metacast(_clname);
}

int buy_goods::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void buy_goods::re()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
