/****************************************************************************
** Meta object code from reading C++ file 'patternsearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../src/patternsearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'patternsearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_search_runnable_t {
    QByteArrayData data[4];
    char stringdata0[47];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_search_runnable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_search_runnable_t qt_meta_stringdata_search_runnable = {
    {
QT_MOC_LITERAL(0, 0, 15), // "search_runnable"
QT_MOC_LITERAL(1, 16, 16), // "signal_completed"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12) // "start_search"

    },
    "search_runnable\0signal_completed\0\0"
    "start_search"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_search_runnable[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void search_runnable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<search_runnable *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_completed(); break;
        case 1: _t->start_search(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (search_runnable::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&search_runnable::signal_completed)) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject search_runnable::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_search_runnable.data,
    qt_meta_data_search_runnable,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *search_runnable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *search_runnable::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_search_runnable.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int search_runnable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void search_runnable::signal_completed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_PatternSearchWindow_t {
    QByteArrayData data[15];
    char stringdata0[222];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PatternSearchWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PatternSearchWindow_t qt_meta_stringdata_PatternSearchWindow = {
    {
QT_MOC_LITERAL(0, 0, 19), // "PatternSearchWindow"
QT_MOC_LITERAL(1, 20, 19), // "signal_start_search"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 7), // "do_open"
QT_MOC_LITERAL(4, 49, 15), // "choices_resized"
QT_MOC_LITERAL(5, 65, 14), // "slot_completed"
QT_MOC_LITERAL(6, 80, 17), // "slot_choose_color"
QT_MOC_LITERAL(7, 98, 16), // "slot_choose_view"
QT_MOC_LITERAL(8, 115, 10), // "slot_using"
QT_MOC_LITERAL(9, 126, 13), // "nav_next_move"
QT_MOC_LITERAL(10, 140, 17), // "nav_previous_move"
QT_MOC_LITERAL(11, 158, 19), // "nav_goto_first_move"
QT_MOC_LITERAL(12, 178, 18), // "nav_goto_last_move"
QT_MOC_LITERAL(13, 197, 13), // "nav_goto_cont"
QT_MOC_LITERAL(14, 211, 10) // "editDelete"

    },
    "PatternSearchWindow\0signal_start_search\0"
    "\0do_open\0choices_resized\0slot_completed\0"
    "slot_choose_color\0slot_choose_view\0"
    "slot_using\0nav_next_move\0nav_previous_move\0"
    "nav_goto_first_move\0nav_goto_last_move\0"
    "nav_goto_cont\0editDelete"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PatternSearchWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   85,    2, 0x0a /* Public */,
       4,    0,   88,    2, 0x0a /* Public */,
       5,    0,   89,    2, 0x0a /* Public */,
       6,    1,   90,    2, 0x0a /* Public */,
       7,    1,   93,    2, 0x0a /* Public */,
       7,    0,   96,    2, 0x2a /* Public | MethodCloned */,
       8,    0,   97,    2, 0x0a /* Public */,
       9,    0,   98,    2, 0x0a /* Public */,
      10,    0,   99,    2, 0x0a /* Public */,
      11,    0,  100,    2, 0x0a /* Public */,
      12,    0,  101,    2, 0x0a /* Public */,
      13,    0,  102,    2, 0x0a /* Public */,
      14,    0,  103,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PatternSearchWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PatternSearchWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->signal_start_search(); break;
        case 1: _t->do_open((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->choices_resized(); break;
        case 3: _t->slot_completed(); break;
        case 4: _t->slot_choose_color((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->slot_choose_view((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->slot_choose_view(); break;
        case 7: _t->slot_using(); break;
        case 8: _t->nav_next_move(); break;
        case 9: _t->nav_previous_move(); break;
        case 10: _t->nav_goto_first_move(); break;
        case 11: _t->nav_goto_last_move(); break;
        case 12: _t->nav_goto_cont(); break;
        case 13: _t->editDelete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PatternSearchWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&PatternSearchWindow::signal_start_search)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PatternSearchWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_PatternSearchWindow.data,
    qt_meta_data_PatternSearchWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PatternSearchWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PatternSearchWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PatternSearchWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int PatternSearchWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void PatternSearchWindow::signal_start_search()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
