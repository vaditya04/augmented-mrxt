/****************************************************************************
** Meta object code from reading C++ file 'simulatedModel.h'
**
** Created: Thu Mar 19 01:31:56 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/model/simulatedModel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'simulatedModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_simulatedModel[] = {

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
      22,   16,   15,   15, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_simulatedModel[] = {
    "simulatedModel\0\0poses\0changedPositions(rposes)\0"
};

void simulatedModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        simulatedModel *_t = static_cast<simulatedModel *>(_o);
        switch (_id) {
        case 0: _t->changedPositions((*reinterpret_cast< rposes(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData simulatedModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject simulatedModel::staticMetaObject = {
    { &worldModelInterface::staticMetaObject, qt_meta_stringdata_simulatedModel,
      qt_meta_data_simulatedModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &simulatedModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *simulatedModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *simulatedModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_simulatedModel))
        return static_cast<void*>(const_cast< simulatedModel*>(this));
    return worldModelInterface::qt_metacast(_clname);
}

int simulatedModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = worldModelInterface::qt_metacall(_c, _id, _a);
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
void simulatedModel::changedPositions(rposes _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
