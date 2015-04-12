/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Thu Mar 19 22:01:44 2015
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "include/ui/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_waitEnding[] = {

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
      12,   11,   11,   11, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_waitEnding[] = {
    "waitEnding\0\0simulationFinished(bool)\0"
};

void waitEnding::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        waitEnding *_t = static_cast<waitEnding *>(_o);
        switch (_id) {
        case 0: _t->simulationFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData waitEnding::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject waitEnding::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_waitEnding,
      qt_meta_data_waitEnding, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &waitEnding::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *waitEnding::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *waitEnding::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_waitEnding))
        return static_cast<void*>(const_cast< waitEnding*>(this));
    return QThread::qt_metacast(_clname);
}

int waitEnding::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void waitEnding::simulationFinished(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      26,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,   12,   11,   11, 0x0a,
      38,   12,   11,   11, 0x0a,
      57,   12,   11,   11, 0x0a,
      72,   12,   11,   11, 0x0a,
      87,   12,   11,   11, 0x0a,
     105,   12,   11,   11, 0x0a,
     123,  121,   11,   11, 0x0a,
     150,  144,   11,   11, 0x0a,
     170,   11,   11,   11, 0x0a,
     183,   11,   11,   11, 0x0a,
     205,   11,   11,   11, 0x0a,
     226,   11,   11,   11, 0x0a,
     250,   11,   11,   11, 0x2a,
     270,   11,   11,   11, 0x0a,
     293,   11,   11,   11, 0x2a,
     312,   11,   11,   11, 0x0a,
     338,   11,   11,   11, 0x2a,
     360,   11,   11,   11, 0x0a,
     385,   11,   11,   11, 0x2a,
     406,   11,   11,   11, 0x0a,
     426,   11,   11,   11, 0x0a,
     450,   11,   11,   11, 0x0a,
     471,   11,   11,   11, 0x2a,
     488,   11,   11,   11, 0x0a,
     505,   11,   11,   11, 0x2a,
     527,  518,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0checked\0randomPoses(bool)\0"
    "openScenario(bool)\0saveOmap(bool)\0"
    "saveVmap(bool)\0saveSLAMlog(bool)\0"
    "saveGTlog(bool)\0n\0changeNumRobots(int)\0"
    "poses\0updatePoses(rposes)\0updateSlam()\0"
    "startSimulation(bool)\0stopSimulation(bool)\0"
    "openScenePropDiag(bool)\0openScenePropDiag()\0"
    "openRobotSetDiag(bool)\0openRobotSetDiag()\0"
    "openStrategyOptDiag(bool)\0"
    "openStrategyOptDiag()\0openSLAMOptSetDiag(bool)\0"
    "openSLAMOptSetDiag()\0openAboutDiag(bool)\0"
    "openAppConfigDiag(bool)\0changeStrategy(bool)\0"
    "changeStrategy()\0changeSlam(bool)\0"
    "changeSlam()\0newscale\0sceneZoom(int)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->randomPoses((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->openScenario((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->saveOmap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->saveVmap((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->saveSLAMlog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->saveGTlog((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->changeNumRobots((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updatePoses((*reinterpret_cast< rposes(*)>(_a[1]))); break;
        case 8: _t->updateSlam(); break;
        case 9: _t->startSimulation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->stopSimulation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->openScenePropDiag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->openScenePropDiag(); break;
        case 13: _t->openRobotSetDiag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->openRobotSetDiag(); break;
        case 15: _t->openStrategyOptDiag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: _t->openStrategyOptDiag(); break;
        case 17: _t->openSLAMOptSetDiag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 18: _t->openSLAMOptSetDiag(); break;
        case 19: _t->openAboutDiag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 20: _t->openAppConfigDiag((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->changeStrategy((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->changeStrategy(); break;
        case 23: _t->changeSlam((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->changeSlam(); break;
        case 25: _t->sceneZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    if (!strcmp(_clname, "Ui::MainWindow"))
        return static_cast< Ui::MainWindow*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 26)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 26;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
