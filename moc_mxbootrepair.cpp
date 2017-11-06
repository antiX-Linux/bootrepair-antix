/****************************************************************************
** Meta object code from reading C++ file 'mxbootrepair.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mxbootrepair.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mxbootrepair.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_mxbootrepair_t {
    QByteArrayData data[18];
    char stringdata0[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mxbootrepair_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mxbootrepair_t qt_meta_stringdata_mxbootrepair = {
    {
QT_MOC_LITERAL(0, 0, 12), // "mxbootrepair"
QT_MOC_LITERAL(1, 13, 9), // "procStart"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 8), // "procTime"
QT_MOC_LITERAL(4, 33, 8), // "procDone"
QT_MOC_LITERAL(5, 42, 8), // "exitCode"
QT_MOC_LITERAL(6, 51, 14), // "setConnections"
QT_MOC_LITERAL(7, 66, 7), // "QTimer*"
QT_MOC_LITERAL(8, 74, 5), // "timer"
QT_MOC_LITERAL(9, 80, 9), // "QProcess*"
QT_MOC_LITERAL(10, 90, 4), // "proc"
QT_MOC_LITERAL(11, 95, 17), // "onStdoutAvailable"
QT_MOC_LITERAL(12, 113, 22), // "on_buttonApply_clicked"
QT_MOC_LITERAL(13, 136, 22), // "on_buttonAbout_clicked"
QT_MOC_LITERAL(14, 159, 21), // "on_buttonHelp_clicked"
QT_MOC_LITERAL(15, 181, 24), // "on_grubMbrButton_clicked"
QT_MOC_LITERAL(16, 206, 25), // "on_grubRootButton_clicked"
QT_MOC_LITERAL(17, 232, 24) // "on_grubEspButton_clicked"

    },
    "mxbootrepair\0procStart\0\0procTime\0"
    "procDone\0exitCode\0setConnections\0"
    "QTimer*\0timer\0QProcess*\0proc\0"
    "onStdoutAvailable\0on_buttonApply_clicked\0"
    "on_buttonAbout_clicked\0on_buttonHelp_clicked\0"
    "on_grubMbrButton_clicked\0"
    "on_grubRootButton_clicked\0"
    "on_grubEspButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mxbootrepair[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    0,   70,    2, 0x0a /* Public */,
       4,    1,   71,    2, 0x0a /* Public */,
       6,    2,   74,    2, 0x0a /* Public */,
      11,    0,   79,    2, 0x0a /* Public */,
      12,    0,   80,    2, 0x0a /* Public */,
      13,    0,   81,    2, 0x0a /* Public */,
      14,    0,   82,    2, 0x0a /* Public */,
      15,    0,   83,    2, 0x08 /* Private */,
      16,    0,   84,    2, 0x08 /* Private */,
      17,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void mxbootrepair::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        mxbootrepair *_t = static_cast<mxbootrepair *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->procStart(); break;
        case 1: _t->procTime(); break;
        case 2: _t->procDone((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->setConnections((*reinterpret_cast< QTimer*(*)>(_a[1])),(*reinterpret_cast< QProcess*(*)>(_a[2]))); break;
        case 4: _t->onStdoutAvailable(); break;
        case 5: _t->on_buttonApply_clicked(); break;
        case 6: _t->on_buttonAbout_clicked(); break;
        case 7: _t->on_buttonHelp_clicked(); break;
        case 8: _t->on_grubMbrButton_clicked(); break;
        case 9: _t->on_grubRootButton_clicked(); break;
        case 10: _t->on_grubEspButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QProcess* >(); break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QTimer* >(); break;
            }
            break;
        }
    }
}

const QMetaObject mxbootrepair::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_mxbootrepair.data,
      qt_meta_data_mxbootrepair,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *mxbootrepair::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mxbootrepair::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_mxbootrepair.stringdata0))
        return static_cast<void*>(const_cast< mxbootrepair*>(this));
    return QDialog::qt_metacast(_clname);
}

int mxbootrepair::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
