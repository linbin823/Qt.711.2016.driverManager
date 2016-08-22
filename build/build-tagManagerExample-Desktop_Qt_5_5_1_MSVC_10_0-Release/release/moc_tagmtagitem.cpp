/****************************************************************************
** Meta object code from reading C++ file 'tagmtagitem.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../lib/tagManager/tagmtagitem.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tagmtagitem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_tagmTagItem_t {
    QByteArrayData data[5];
    char stringdata0[46];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tagmTagItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tagmTagItem_t qt_meta_stringdata_tagmTagItem = {
    {
QT_MOC_LITERAL(0, 0, 11), // "tagmTagItem"
QT_MOC_LITERAL(1, 12, 14), // "tagItemChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "setValue"
QT_MOC_LITERAL(4, 37, 8) // "newValue"

    },
    "tagmTagItem\0tagItemChanged\0\0setValue\0"
    "newValue"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tagmTagItem[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QVariant,    4,

       0        // eod
};

void tagmTagItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        tagmTagItem *_t = static_cast<tagmTagItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->tagItemChanged(); break;
        case 1: _t->setValue((*reinterpret_cast< QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (tagmTagItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&tagmTagItem::tagItemChanged)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject tagmTagItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_tagmTagItem.data,
      qt_meta_data_tagmTagItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *tagmTagItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tagmTagItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_tagmTagItem.stringdata0))
        return static_cast<void*>(const_cast< tagmTagItem*>(this));
    if (!strcmp(_clname, "iLoadSave"))
        return static_cast< iLoadSave*>(const_cast< tagmTagItem*>(this));
    if (!strcmp(_clname, "iTagItemCommon"))
        return static_cast< iTagItemCommon*>(const_cast< tagmTagItem*>(this));
    if (!strcmp(_clname, "iTagItemUpdate"))
        return static_cast< iTagItemUpdate*>(const_cast< tagmTagItem*>(this));
    if (!strcmp(_clname, "iTagItemSelfCheck"))
        return static_cast< iTagItemSelfCheck*>(const_cast< tagmTagItem*>(this));
    return QObject::qt_metacast(_clname);
}

int tagmTagItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void tagmTagItem::tagItemChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
