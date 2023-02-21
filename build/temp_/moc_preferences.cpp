/****************************************************************************
** Meta object code from reading C++ file 'preferences.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/preferences.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'preferences.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EngineDialog_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EngineDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EngineDialog_t qt_meta_stringdata_EngineDialog = {
    {
QT_MOC_LITERAL(0, 0, 12), // "EngineDialog"
QT_MOC_LITERAL(1, 13, 13), // "slot_get_path"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "EngineDialog\0slot_get_path\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EngineDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void EngineDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EngineDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slot_get_path(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject EngineDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_EngineDialog.data,
    qt_meta_data_EngineDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EngineDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EngineDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EngineDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int EngineDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_PreferencesDialog_t {
    QByteArrayData data[35];
    char stringdata0[566];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PreferencesDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PreferencesDialog_t qt_meta_stringdata_PreferencesDialog = {
    {
QT_MOC_LITERAL(0, 0, 17), // "PreferencesDialog"
QT_MOC_LITERAL(1, 18, 14), // "signal_addHost"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "signal_delHost"
QT_MOC_LITERAL(4, 49, 33), // "on_soundButtonGroup_buttonCli..."
QT_MOC_LITERAL(5, 83, 16), // "QAbstractButton*"
QT_MOC_LITERAL(6, 100, 15), // "slot_new_server"
QT_MOC_LITERAL(7, 116, 15), // "slot_add_server"
QT_MOC_LITERAL(8, 132, 18), // "slot_delete_server"
QT_MOC_LITERAL(9, 151, 15), // "slot_new_engine"
QT_MOC_LITERAL(10, 167, 15), // "slot_dup_engine"
QT_MOC_LITERAL(11, 183, 18), // "slot_change_engine"
QT_MOC_LITERAL(12, 202, 18), // "slot_delete_engine"
QT_MOC_LITERAL(13, 221, 10), // "slot_apply"
QT_MOC_LITERAL(14, 232, 13), // "startHelpMode"
QT_MOC_LITERAL(15, 246, 10), // "selectFont"
QT_MOC_LITERAL(16, 257, 12), // "QPushButton*"
QT_MOC_LITERAL(17, 270, 6), // "QFont&"
QT_MOC_LITERAL(18, 277, 11), // "slot_accept"
QT_MOC_LITERAL(19, 289, 11), // "slot_reject"
QT_MOC_LITERAL(20, 301, 18), // "slot_serverChanged"
QT_MOC_LITERAL(21, 320, 24), // "slot_getGobanPicturePath"
QT_MOC_LITERAL(22, 345, 24), // "slot_getTablePicturePath"
QT_MOC_LITERAL(23, 370, 22), // "slot_main_time_changed"
QT_MOC_LITERAL(24, 393, 20), // "slot_BY_time_changed"
QT_MOC_LITERAL(25, 414, 18), // "select_white_color"
QT_MOC_LITERAL(26, 433, 18), // "select_black_color"
QT_MOC_LITERAL(27, 452, 17), // "select_stone_look"
QT_MOC_LITERAL(28, 470, 17), // "select_chat_color"
QT_MOC_LITERAL(29, 488, 16), // "slot_autosavedir"
QT_MOC_LITERAL(30, 505, 10), // "slot_dbdir"
QT_MOC_LITERAL(31, 516, 13), // "slot_dbsubdir"
QT_MOC_LITERAL(32, 530, 10), // "slot_dbcfg"
QT_MOC_LITERAL(33, 541, 10), // "slot_dbrem"
QT_MOC_LITERAL(34, 552, 13) // "slot_dbcreate"

    },
    "PreferencesDialog\0signal_addHost\0\0"
    "signal_delHost\0on_soundButtonGroup_buttonClicked\0"
    "QAbstractButton*\0slot_new_server\0"
    "slot_add_server\0slot_delete_server\0"
    "slot_new_engine\0slot_dup_engine\0"
    "slot_change_engine\0slot_delete_engine\0"
    "slot_apply\0startHelpMode\0selectFont\0"
    "QPushButton*\0QFont&\0slot_accept\0"
    "slot_reject\0slot_serverChanged\0"
    "slot_getGobanPicturePath\0"
    "slot_getTablePicturePath\0"
    "slot_main_time_changed\0slot_BY_time_changed\0"
    "select_white_color\0select_black_color\0"
    "select_stone_look\0select_chat_color\0"
    "slot_autosavedir\0slot_dbdir\0slot_dbsubdir\0"
    "slot_dbcfg\0slot_dbrem\0slot_dbcreate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PreferencesDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,  164,    2, 0x06 /* Public */,
       3,    1,  175,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,  178,    2, 0x0a /* Public */,
       6,    0,  181,    2, 0x0a /* Public */,
       7,    0,  182,    2, 0x0a /* Public */,
       8,    0,  183,    2, 0x0a /* Public */,
       9,    0,  184,    2, 0x0a /* Public */,
      10,    0,  185,    2, 0x0a /* Public */,
      11,    0,  186,    2, 0x0a /* Public */,
      12,    0,  187,    2, 0x0a /* Public */,
      13,    0,  188,    2, 0x0a /* Public */,
      14,    0,  189,    2, 0x0a /* Public */,
      15,    2,  190,    2, 0x0a /* Public */,
      18,    0,  195,    2, 0x0a /* Public */,
      19,    0,  196,    2, 0x0a /* Public */,
      20,    1,  197,    2, 0x0a /* Public */,
      21,    0,  200,    2, 0x0a /* Public */,
      22,    0,  201,    2, 0x0a /* Public */,
      23,    1,  202,    2, 0x0a /* Public */,
      24,    1,  205,    2, 0x0a /* Public */,
      25,    1,  208,    2, 0x0a /* Public */,
      26,    1,  211,    2, 0x0a /* Public */,
      27,    1,  214,    2, 0x0a /* Public */,
      28,    1,  217,    2, 0x0a /* Public */,
      29,    1,  220,    2, 0x0a /* Public */,
      30,    1,  223,    2, 0x0a /* Public */,
      31,    1,  226,    2, 0x0a /* Public */,
      32,    1,  229,    2, 0x0a /* Public */,
      33,    1,  232,    2, 0x0a /* Public */,
      34,    1,  235,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::UInt, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16, 0x80000000 | 17,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void PreferencesDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PreferencesDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_addHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< uint(*)>(_a[3])),(*reinterpret_cast< const QString(*)>(_a[4])),(*reinterpret_cast< const QString(*)>(_a[5]))); break;
        case 1: _t->signal_delHost((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_soundButtonGroup_buttonClicked((*reinterpret_cast< QAbstractButton*(*)>(_a[1]))); break;
        case 3: _t->slot_new_server(); break;
        case 4: _t->slot_add_server(); break;
        case 5: _t->slot_delete_server(); break;
        case 6: _t->slot_new_engine(); break;
        case 7: _t->slot_dup_engine(); break;
        case 8: _t->slot_change_engine(); break;
        case 9: _t->slot_delete_engine(); break;
        case 10: _t->slot_apply(); break;
        case 11: _t->startHelpMode(); break;
        case 12: _t->selectFont((*reinterpret_cast< QPushButton*(*)>(_a[1])),(*reinterpret_cast< QFont(*)>(_a[2]))); break;
        case 13: _t->slot_accept(); break;
        case 14: _t->slot_reject(); break;
        case 15: _t->slot_serverChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 16: _t->slot_getGobanPicturePath(); break;
        case 17: _t->slot_getTablePicturePath(); break;
        case 18: _t->slot_main_time_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 19: _t->slot_BY_time_changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 20: _t->select_white_color((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 21: _t->select_black_color((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 22: _t->select_stone_look((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->select_chat_color((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->slot_autosavedir((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->slot_dbdir((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 26: _t->slot_dbsubdir((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 27: _t->slot_dbcfg((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 28: _t->slot_dbrem((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 29: _t->slot_dbcreate((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractButton* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PreferencesDialog::*)(const QString & , const QString & , unsigned int , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencesDialog::signal_addHost)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PreferencesDialog::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PreferencesDialog::signal_delHost)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PreferencesDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_PreferencesDialog.data,
    qt_meta_data_PreferencesDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PreferencesDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PreferencesDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PreferencesDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int PreferencesDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void PreferencesDialog::signal_addHost(const QString & _t1, const QString & _t2, unsigned int _t3, const QString & _t4, const QString & _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void PreferencesDialog::signal_delHost(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
