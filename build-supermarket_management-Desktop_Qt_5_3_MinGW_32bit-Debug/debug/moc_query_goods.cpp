/****************************************************************************
** Meta object code from reading C++ file 'query_goods.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../supermarket_management/query_goods.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'query_goods.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_query_goods_t {
    QByteArrayData data[11];
    char stringdata[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_query_goods_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_query_goods_t qt_meta_stringdata_query_goods = {
    {
QT_MOC_LITERAL(0, 0, 11),
QT_MOC_LITERAL(1, 12, 2),
QT_MOC_LITERAL(2, 15, 0),
QT_MOC_LITERAL(3, 16, 20),
QT_MOC_LITERAL(4, 37, 8),
QT_MOC_LITERAL(5, 46, 5),
QT_MOC_LITERAL(6, 52, 3),
QT_MOC_LITERAL(7, 56, 7),
QT_MOC_LITERAL(8, 64, 3),
QT_MOC_LITERAL(9, 68, 4),
QT_MOC_LITERAL(10, 73, 14)
    },
    "query_goods\0re\0\0on_btn_query_clicked\0"
    "do_query\0index\0cnt\0display\0row\0subs\0"
    "read_from_flie"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_query_goods[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    2,   41,    2, 0x0a /* Public */,
       7,    2,   46,    2, 0x0a /* Public */,
      10,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,    8,    9,
    QMetaType::Int,

       0        // eod
};

void query_goods::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        query_goods *_t = static_cast<query_goods *>(_o);
        switch (_id) {
        case 0: _t->re(); break;
        case 1: _t->on_btn_query_clicked(); break;
        case 2: _t->do_query((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 3: _t->display((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QStringList(*)>(_a[2]))); break;
        case 4: { int _r = _t->read_from_flie();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (query_goods::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&query_goods::re)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject query_goods::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_query_goods.data,
      qt_meta_data_query_goods,  qt_static_metacall, 0, 0}
};


const QMetaObject *query_goods::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *query_goods::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_query_goods.stringdata))
        return static_cast<void*>(const_cast< query_goods*>(this));
    return QDialog::qt_metacast(_clname);
}

int query_goods::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void query_goods::re()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
