/****************************************************************************
** Meta object code from reading C++ file 'commande.h'
**
** Created: Mon 29. Apr 17:29:56 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "commande.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'commande.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_commande[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x08,
      42,    9,    9,    9, 0x08,
      74,    9,    9,    9, 0x08,
     106,    9,    9,    9, 0x08,
     138,    9,    9,    9, 0x08,
     169,    9,    9,    9, 0x08,
     204,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_commande[] = {
    "commande\0\0on_pushButton_camera1_clicked()\0"
    "on_pushButton_camera2_clicked()\0"
    "on_pushButton_camera3_clicked()\0"
    "on_pushButton_camera4_clicked()\0"
    "on_pushButton_Retour_clicked()\0"
    "on_horizontalSlider_valueChanged()\0"
    "on_checkBox_clicked()\0"
};

void commande::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        commande *_t = static_cast<commande *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_camera1_clicked(); break;
        case 1: _t->on_pushButton_camera2_clicked(); break;
        case 2: _t->on_pushButton_camera3_clicked(); break;
        case 3: _t->on_pushButton_camera4_clicked(); break;
        case 4: _t->on_pushButton_Retour_clicked(); break;
        case 5: _t->on_horizontalSlider_valueChanged(); break;
        case 6: _t->on_checkBox_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData commande::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject commande::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_commande,
      qt_meta_data_commande, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &commande::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *commande::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *commande::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_commande))
        return static_cast<void*>(const_cast< commande*>(this));
    return QWidget::qt_metacast(_clname);
}

int commande::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
