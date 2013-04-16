/****************************************************************************
** Meta object code from reading C++ file 'dirigeable.h'
**
** Created: Tue 16. Apr 16:00:35 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dirigeable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dirigeable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Dirigeable[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x0a,
      36,   12,   11,   11, 0x0a,
      48,   12,   11,   11, 0x0a,
      61,   12,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Dirigeable[] = {
    "Dirigeable\0\0value\0setDirection(int)\0"
    "setH_c(int)\0setWind(int)\0setAngle(float)\0"
};

void Dirigeable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Dirigeable *_t = static_cast<Dirigeable *>(_o);
        switch (_id) {
        case 0: _t->setDirection((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->setH_c((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->setWind((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setAngle((*reinterpret_cast< float(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Dirigeable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Dirigeable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Dirigeable,
      qt_meta_data_Dirigeable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Dirigeable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Dirigeable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Dirigeable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Dirigeable))
        return static_cast<void*>(const_cast< Dirigeable*>(this));
    return QObject::qt_metacast(_clname);
}

int Dirigeable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
