/****************************************************************************
** Meta object code from reading C++ file 'del_goods.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../supermarket_management/del_goods.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'del_goods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_del_goods_t {
    QByteArrayData data[11];
    char stringdata[104];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_del_goods_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_del_goods_t qt_meta_stringdata_del_goods = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 2),
QT_MOC_LITERAL(2, 13, 0),
QT_MOC_LITERAL(3, 14, 21),
QT_MOC_LITERAL(4, 36, 15),
QT_MOC_LITERAL(5, 52, 3),
QT_MOC_LITERAL(6, 56, 4),
QT_MOC_LITERAL(7, 61, 3),
QT_MOC_LITERAL(8, 65, 4),
QT_MOC_LITERAL(9, 70, 14),
QT_MOC_LITERAL(10, 85, 18)
    },
    "del_goods\0re\0\0on_btn_cancel_clicked\0"
    "find_from_files\0cnt\0cnt1\0del\0subs\0"
    "read_from_flie\0on_btn_del_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_del_goods[] = {

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
       3,    0,   45,    2, 0x0a /* Public */,
       4,    2,   46,    2, 0x0a /* Public */,
       7,    1,   51,    2, 0x0a /* Public */,
       9,    0,   54,    2, 0x0a /* Public */,
      10,    0,   55,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void del_goods::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        del_goods *_t = static_cast<del_goods *>(_o);
        switch (_id) {
        case 0: _t->re(); break;
        case 1: _t->on_btn_cancel_clicked(); break;
        case 2: { QString _r = _t->find_from_files((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 3: _t->del((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: { int _r = _t->read_from_flie();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 5: _t->on_btn_del_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (del_goods::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&del_goods::re)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject del_goods::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_del_goods.data,
      qt_meta_data_del_goods,  qt_static_metacall, 0, 0}
};


const QMetaObject *del_goods::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *del_goods::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_del_goods.stringdata))
        return static_cast<void*>(const_cast< del_goods*>(this));
    return QDialog::qt_metacast(_clname);
}

int del_goods::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void del_goods::re()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
