/****************************************************************************
** Meta object code from reading C++ file 'dimmanuel.h'
**
** Created: Tue 16. Apr 16:15:21 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "dimmanuel.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dimmanuel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DimManuel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      43,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DimManuel[] = {
    "DimManuel\0\0on_pushButton_Quitter_clicked()\0"
    "on_pushButton_clicked()\0"
};

void DimManuel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DimManuel *_t = static_cast<DimManuel *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_Quitter_clicked(); break;
        case 1: _t->on_pushButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData DimManuel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DimManuel::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_DimManuel,
      qt_meta_data_DimManuel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DimManuel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DimManuel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DimManuel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DimManuel))
        return static_cast<void*>(const_cast< DimManuel*>(this));
    return QWidget::qt_metacast(_clname);
}

int DimManuel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
