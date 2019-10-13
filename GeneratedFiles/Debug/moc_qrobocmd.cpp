/****************************************************************************
** Meta object code from reading C++ file 'qrobocmd.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../qrobocmd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qrobocmd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QRoboCmd[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x0a,
      22,    9,    9,    9, 0x0a,
      35,    9,    9,    9, 0x0a,
      56,    9,    9,    9, 0x0a,
      77,    9,    9,    9, 0x0a,
      98,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QRoboCmd[] = {
    "QRoboCmd\0\0h_Timeout()\0h_Timeout2()\0"
    "on_m_act1_released()\0on_m_act2_released()\0"
    "on_m_act3_released()\0on_m_act4_released()\0"
};

void QRoboCmd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QRoboCmd *_t = static_cast<QRoboCmd *>(_o);
        switch (_id) {
        case 0: _t->h_Timeout(); break;
        case 1: _t->h_Timeout2(); break;
        case 2: _t->on_m_act1_released(); break;
        case 3: _t->on_m_act2_released(); break;
        case 4: _t->on_m_act3_released(); break;
        case 5: _t->on_m_act4_released(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData QRoboCmd::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QRoboCmd::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_QRoboCmd,
      qt_meta_data_QRoboCmd, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QRoboCmd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QRoboCmd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QRoboCmd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QRoboCmd))
        return static_cast<void*>(const_cast< QRoboCmd*>(this));
    return QDialog::qt_metacast(_clname);
}

int QRoboCmd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
