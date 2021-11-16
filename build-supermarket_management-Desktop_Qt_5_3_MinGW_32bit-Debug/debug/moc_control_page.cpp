/****************************************************************************
** Meta object code from reading C++ file 'control_page.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../supermarket_management/control_page.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'control_page.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_control_page_t {
    QByteArrayData data[11];
    char stringdata[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_control_page_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_control_page_t qt_meta_stringdata_control_page = {
    {
QT_MOC_LITERAL(0, 0, 12),
QT_MOC_LITERAL(1, 13, 7),
QT_MOC_LITERAL(2, 21, 0),
QT_MOC_LITERAL(3, 22, 18),
QT_MOC_LITERAL(4, 41, 18),
QT_MOC_LITERAL(5, 60, 21),
QT_MOC_LITERAL(6, 82, 20),
QT_MOC_LITERAL(7, 103, 10),
QT_MOC_LITERAL(8, 114, 7),
QT_MOC_LITERAL(9, 122, 14),
QT_MOC_LITERAL(10, 137, 18)
    },
    "control_page\0refresh\0\0on_btn_add_clicked\0"
    "on_btn_del_clicked\0on_btn_modify_clicked\0"
    "on_btn_query_clicked\0table_init\0display\0"
    "read_from_flie\0on_btn_buy_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_control_page[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Void,

       0        // eod
};

void control_page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        control_page *_t = static_cast<control_page *>(_o);
        switch (_id) {
        case 0: _t->refresh(); break;
        case 1: _t->on_btn_add_clicked(); break;
        case 2: _t->on_btn_del_clicked(); break;
        case 3: _t->on_btn_modify_clicked(); break;
        case 4: _t->on_btn_query_clicked(); break;
        case 5: _t->table_init(); break;
        case 6: _t->display(); break;
        case 7: { int _r = _t->read_from_flie();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = _r; }  break;
        case 8: _t->on_btn_buy_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject control_page::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_control_page.data,
      qt_meta_data_control_page,  qt_static_metacall, 0, 0}
};


const QMetaObject *control_page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *control_page::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_control_page.stringdata))
        return static_cast<void*>(const_cast< control_page*>(this));
    return QWidget::qt_metacast(_clname);
}

int control_page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
