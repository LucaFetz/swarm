/****************************************************************************
** Meta object code from reading C++ file 'PoseRemapper.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/ros_cellulo/include/CelluloRobot/src/tile/PoseRemapper.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PoseRemapper.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Cellulo__PoseRemapper_t {
    QByteArrayData data[5];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Cellulo__PoseRemapper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Cellulo__PoseRemapper_t qt_meta_stringdata_Cellulo__PoseRemapper = {
    {
QT_MOC_LITERAL(0, 0, 21), // "Cellulo::PoseRemapper"
QT_MOC_LITERAL(1, 22, 9), // "remapPose"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 4), // "pose"
QT_MOC_LITERAL(4, 38, 6) // "sender"

    },
    "Cellulo::PoseRemapper\0remapPose\0\0pose\0"
    "sender"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Cellulo__PoseRemapper[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,   24,    2, 0x0a /* Public */,
       1,    1,   29,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::QVector3D, QMetaType::QVector3D, QMetaType::QObjectStar,    3,    4,
    QMetaType::QVector3D, QMetaType::QVector3D,    3,

       0        // eod
};

void Cellulo::PoseRemapper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        PoseRemapper *_t = static_cast<PoseRemapper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { QVector3D _r = _t->remapPose((*reinterpret_cast< const QVector3D(*)>(_a[1])),(*reinterpret_cast< QObject*(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        case 1: { QVector3D _r = _t->remapPose((*reinterpret_cast< const QVector3D(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVector3D*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Cellulo::PoseRemapper::staticMetaObject = {
    { &QQuickItem::staticMetaObject, qt_meta_stringdata_Cellulo__PoseRemapper.data,
      qt_meta_data_Cellulo__PoseRemapper,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Cellulo::PoseRemapper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Cellulo::PoseRemapper::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Cellulo__PoseRemapper.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int Cellulo::PoseRemapper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
