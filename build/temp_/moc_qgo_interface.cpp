/****************************************************************************
** Meta object code from reading C++ file 'qgo_interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/qgo_interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qgo_interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_qGoBoard_t {
    QByteArrayData data[9];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qGoBoard_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qGoBoard_t qt_meta_stringdata_qGoBoard = {
    {
QT_MOC_LITERAL(0, 0, 8), // "qGoBoard"
QT_MOC_LITERAL(1, 9, 15), // "slot_closeevent"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 16), // "slot_sendcomment"
QT_MOC_LITERAL(4, 43, 18), // "slot_addtimePauseW"
QT_MOC_LITERAL(5, 62, 18), // "slot_addtimePauseB"
QT_MOC_LITERAL(6, 81, 23), // "slot_ttOpponentSelected"
QT_MOC_LITERAL(7, 105, 15), // "slot_ttControls"
QT_MOC_LITERAL(8, 121, 11) // "slot_ttMark"

    },
    "qGoBoard\0slot_closeevent\0\0slot_sendcomment\0"
    "slot_addtimePauseW\0slot_addtimePauseB\0"
    "slot_ttOpponentSelected\0slot_ttControls\0"
    "slot_ttMark"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qGoBoard[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x0a /* Public */,
       3,    1,   50,    2, 0x0a /* Public */,
       4,    0,   53,    2, 0x0a /* Public */,
       5,    0,   54,    2, 0x0a /* Public */,
       6,    1,   55,    2, 0x0a /* Public */,
       7,    1,   58,    2, 0x0a /* Public */,
       8,    1,   61,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void qGoBoard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qGoBoard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_closeevent(); break;
        case 1: _t->slot_sendcomment((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->slot_addtimePauseW(); break;
        case 3: _t->slot_addtimePauseB(); break;
        case 4: _t->slot_ttOpponentSelected((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->slot_ttControls((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slot_ttMark((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qGoBoard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qGoBoard.data,
    qt_meta_data_qGoBoard,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qGoBoard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qGoBoard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qGoBoard.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qGoBoard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
struct qt_meta_stringdata_qGoIF_t {
    QByteArrayData data[17];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_qGoIF_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_qGoIF_t qt_meta_stringdata_qGoIF = {
    {
QT_MOC_LITERAL(0, 0, 5), // "qGoIF"
QT_MOC_LITERAL(1, 6, 9), // "slot_move"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 9), // "GameInfo*"
QT_MOC_LITERAL(4, 27, 13), // "slot_gamemove"
QT_MOC_LITERAL(5, 41, 5), // "Game*"
QT_MOC_LITERAL(6, 47, 11), // "slot_kibitz"
QT_MOC_LITERAL(7, 59, 9), // "slot_komi"
QT_MOC_LITERAL(8, 69, 13), // "slot_freegame"
QT_MOC_LITERAL(9, 83, 17), // "slot_removestones"
QT_MOC_LITERAL(10, 101, 9), // "slot_undo"
QT_MOC_LITERAL(11, 111, 11), // "slot_result"
QT_MOC_LITERAL(12, 123, 18), // "slot_matchsettings"
QT_MOC_LITERAL(13, 142, 10), // "assessType"
QT_MOC_LITERAL(14, 153, 18), // "slot_requestDialog"
QT_MOC_LITERAL(15, 172, 14), // "slot_timeAdded"
QT_MOC_LITERAL(16, 187, 11) // "set_observe"

    },
    "qGoIF\0slot_move\0\0GameInfo*\0slot_gamemove\0"
    "Game*\0slot_kibitz\0slot_komi\0slot_freegame\0"
    "slot_removestones\0slot_undo\0slot_result\0"
    "slot_matchsettings\0assessType\0"
    "slot_requestDialog\0slot_timeAdded\0"
    "set_observe"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_qGoIF[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   74,    2, 0x0a /* Public */,
       4,    1,   77,    2, 0x0a /* Public */,
       6,    3,   80,    2, 0x0a /* Public */,
       7,    3,   87,    2, 0x0a /* Public */,
       8,    1,   94,    2, 0x0a /* Public */,
       9,    2,   97,    2, 0x0a /* Public */,
      10,    2,  102,    2, 0x0a /* Public */,
      11,    4,  107,    2, 0x0a /* Public */,
      12,    4,  116,    2, 0x0a /* Public */,
      14,    4,  125,    2, 0x0a /* Public */,
      15,    2,  134,    2, 0x0a /* Public */,
      16,    1,  139,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 13,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

       0        // eod
};

void qGoIF::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<qGoIF *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_move((*reinterpret_cast< GameInfo*(*)>(_a[1]))); break;
        case 1: _t->slot_gamemove((*reinterpret_cast< Game*(*)>(_a[1]))); break;
        case 2: _t->slot_kibitz((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 3: _t->slot_komi((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 4: _t->slot_freegame((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slot_removestones((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 6: _t->slot_undo((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 7: _t->slot_result((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 8: _t->slot_matchsettings((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< assessType(*)>(_a[4]))); break;
        case 9: _t->slot_requestDialog((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4]))); break;
        case 10: _t->slot_timeAdded((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 11: _t->set_observe((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject qGoIF::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_qGoIF.data,
    qt_meta_data_qGoIF,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *qGoIF::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *qGoIF::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_qGoIF.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int qGoIF::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
