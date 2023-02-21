/****************************************************************************
** Meta object code from reading C++ file 'qgtp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/qgtp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgtp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GTP_Process_t {
    QByteArrayData data[12];
    char stringdata0[172];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GTP_Process_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GTP_Process_t qt_meta_stringdata_GTP_Process = {
    {
QT_MOC_LITERAL(0, 0, 11), // "GTP_Process"
QT_MOC_LITERAL(1, 12, 12), // "slot_started"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 13), // "slot_finished"
QT_MOC_LITERAL(4, 40, 8), // "exitcode"
QT_MOC_LITERAL(5, 49, 20), // "QProcess::ExitStatus"
QT_MOC_LITERAL(6, 70, 6), // "status"
QT_MOC_LITERAL(7, 77, 10), // "slot_error"
QT_MOC_LITERAL(8, 88, 22), // "QProcess::ProcessError"
QT_MOC_LITERAL(9, 111, 19), // "slot_receive_stdout"
QT_MOC_LITERAL(10, 131, 21), // "slot_startup_messages"
QT_MOC_LITERAL(11, 153, 18) // "slot_abort_request"

    },
    "GTP_Process\0slot_started\0\0slot_finished\0"
    "exitcode\0QProcess::ExitStatus\0status\0"
    "slot_error\0QProcess::ProcessError\0"
    "slot_receive_stdout\0slot_startup_messages\0"
    "slot_abort_request"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GTP_Process[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    2,   45,    2, 0x0a /* Public */,
       7,    1,   50,    2, 0x0a /* Public */,
       9,    0,   53,    2, 0x0a /* Public */,
      10,    0,   54,    2, 0x0a /* Public */,
      11,    1,   55,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 8,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void GTP_Process::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GTP_Process *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_started(); break;
        case 1: _t->slot_finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        case 2: _t->slot_error((*reinterpret_cast< QProcess::ProcessError(*)>(_a[1]))); break;
        case 3: _t->slot_receive_stdout(); break;
        case 4: _t->slot_startup_messages(); break;
        case 5: _t->slot_abort_request((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject GTP_Process::staticMetaObject = { {
    QMetaObject::SuperData::link<QProcess::staticMetaObject>(),
    qt_meta_stringdata_GTP_Process.data,
    qt_meta_data_GTP_Process,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *GTP_Process::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GTP_Process::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GTP_Process.stringdata0))
        return static_cast<void*>(this);
    return QProcess::qt_metacast(_clname);
}

int GTP_Process::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
