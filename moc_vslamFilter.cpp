/****************************************************************************
** Meta object code from reading C++ file 'vslamFilter.h'
**
** Created: Fri Feb 6 19:50:51 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/architecture/slam/mapbuilders/vslamFilter.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vslamFilter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_vslamFilter[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_vslamFilter[] = {
    "vslamFilter\0\0slamUpdated()\0"
};

void vslamFilter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        vslamFilter *_t = static_cast<vslamFilter *>(_o);
        switch (_id) {
        case 0: _t->slamUpdated(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData vslamFilter::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject vslamFilter::staticMetaObject = {
    { &slamInterface::staticMetaObject, qt_meta_stringdata_vslamFilter,
      qt_meta_data_vslamFilter, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &vslamFilter::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *vslamFilter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *vslamFilter::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_vslamFilter))
        return static_cast<void*>(const_cast< vslamFilter*>(this));
    return slamInterface::qt_metacast(_clname);
}

int vslamFilter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = slamInterface::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void vslamFilter::slamUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}
QT_END_MOC_NAMESPACE
