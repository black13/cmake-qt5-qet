/****************************************************************************
** Meta object code from reading C++ file 'schemavue.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../schemavue.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'schemavue.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SchemaVue_t {
    QByteArrayData data[21];
    char stringdata0[246];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SchemaVue_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SchemaVue_t qt_meta_stringdata_SchemaVue = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SchemaVue"
QT_MOC_LITERAL(1, 10, 16), // "selectionChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 19), // "antialiasingChanged"
QT_MOC_LITERAL(4, 48, 11), // "modeChanged"
QT_MOC_LITERAL(5, 60, 13), // "selectNothing"
QT_MOC_LITERAL(6, 74, 9), // "selectAll"
QT_MOC_LITERAL(7, 84, 12), // "selectInvert"
QT_MOC_LITERAL(8, 97, 9), // "supprimer"
QT_MOC_LITERAL(9, 107, 7), // "pivoter"
QT_MOC_LITERAL(10, 115, 20), // "setVisualisationMode"
QT_MOC_LITERAL(11, 136, 16), // "setSelectionMode"
QT_MOC_LITERAL(12, 153, 8), // "zoomPlus"
QT_MOC_LITERAL(13, 162, 9), // "zoomMoins"
QT_MOC_LITERAL(14, 172, 7), // "zoomFit"
QT_MOC_LITERAL(15, 180, 9), // "zoomReset"
QT_MOC_LITERAL(16, 190, 6), // "couper"
QT_MOC_LITERAL(17, 197, 6), // "copier"
QT_MOC_LITERAL(18, 204, 6), // "coller"
QT_MOC_LITERAL(19, 211, 12), // "flushGarbage"
QT_MOC_LITERAL(20, 224, 21) // "slot_selectionChanged"

    },
    "SchemaVue\0selectionChanged\0\0"
    "antialiasingChanged\0modeChanged\0"
    "selectNothing\0selectAll\0selectInvert\0"
    "supprimer\0pivoter\0setVisualisationMode\0"
    "setSelectionMode\0zoomPlus\0zoomMoins\0"
    "zoomFit\0zoomReset\0couper\0copier\0coller\0"
    "flushGarbage\0slot_selectionChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SchemaVue[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  109,    2, 0x06 /* Public */,
       3,    0,  110,    2, 0x06 /* Public */,
       4,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  112,    2, 0x0a /* Public */,
       6,    0,  113,    2, 0x0a /* Public */,
       7,    0,  114,    2, 0x0a /* Public */,
       8,    0,  115,    2, 0x0a /* Public */,
       9,    0,  116,    2, 0x0a /* Public */,
      10,    0,  117,    2, 0x0a /* Public */,
      11,    0,  118,    2, 0x0a /* Public */,
      12,    0,  119,    2, 0x0a /* Public */,
      13,    0,  120,    2, 0x0a /* Public */,
      14,    0,  121,    2, 0x0a /* Public */,
      15,    0,  122,    2, 0x0a /* Public */,
      16,    0,  123,    2, 0x0a /* Public */,
      17,    0,  124,    2, 0x0a /* Public */,
      18,    0,  125,    2, 0x0a /* Public */,
      19,    0,  126,    2, 0x08 /* Private */,
      20,    0,  127,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void SchemaVue::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SchemaVue *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->selectionChanged(); break;
        case 1: _t->antialiasingChanged(); break;
        case 2: _t->modeChanged(); break;
        case 3: _t->selectNothing(); break;
        case 4: _t->selectAll(); break;
        case 5: _t->selectInvert(); break;
        case 6: _t->supprimer(); break;
        case 7: _t->pivoter(); break;
        case 8: _t->setVisualisationMode(); break;
        case 9: _t->setSelectionMode(); break;
        case 10: _t->zoomPlus(); break;
        case 11: _t->zoomMoins(); break;
        case 12: _t->zoomFit(); break;
        case 13: _t->zoomReset(); break;
        case 14: _t->couper(); break;
        case 15: _t->copier(); break;
        case 16: _t->coller(); break;
        case 17: _t->flushGarbage(); break;
        case 18: _t->slot_selectionChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SchemaVue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SchemaVue::selectionChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SchemaVue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SchemaVue::antialiasingChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SchemaVue::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SchemaVue::modeChanged)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SchemaVue::staticMetaObject = { {
    QMetaObject::SuperData::link<QGraphicsView::staticMetaObject>(),
    qt_meta_stringdata_SchemaVue.data,
    qt_meta_data_SchemaVue,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SchemaVue::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SchemaVue::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SchemaVue.stringdata0))
        return static_cast<void*>(this);
    return QGraphicsView::qt_metacast(_clname);
}

int SchemaVue::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void SchemaVue::selectionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void SchemaVue::antialiasingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void SchemaVue::modeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
