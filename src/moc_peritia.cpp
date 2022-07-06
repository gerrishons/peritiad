/****************************************************************************
** Meta object code from reading C++ file 'peritia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "peritia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'peritia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Peritia_t {
    QByteArrayData data[17];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Peritia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Peritia_t qt_meta_stringdata_Peritia = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Peritia"
QT_MOC_LITERAL(1, 8, 11), // "newDocument"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "changePhoto"
QT_MOC_LITERAL(4, 33, 4), // "open"
QT_MOC_LITERAL(5, 38, 4), // "save"
QT_MOC_LITERAL(6, 43, 6), // "saveAs"
QT_MOC_LITERAL(7, 50, 5), // "print"
QT_MOC_LITERAL(8, 56, 10), // "selectFont"
QT_MOC_LITERAL(9, 67, 11), // "setFontBold"
QT_MOC_LITERAL(10, 79, 4), // "bold"
QT_MOC_LITERAL(11, 84, 16), // "setFontUnderline"
QT_MOC_LITERAL(12, 101, 9), // "underline"
QT_MOC_LITERAL(13, 111, 13), // "setFontItalic"
QT_MOC_LITERAL(14, 125, 6), // "italic"
QT_MOC_LITERAL(15, 132, 9), // "ShowAbout"
QT_MOC_LITERAL(16, 142, 13) // "AboutScalabli"

    },
    "Peritia\0newDocument\0\0changePhoto\0open\0"
    "save\0saveAs\0print\0selectFont\0setFontBold\0"
    "bold\0setFontUnderline\0underline\0"
    "setFontItalic\0italic\0ShowAbout\0"
    "AboutScalabli"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Peritia[] = {

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
       1,    0,   74,    2, 0x08 /* Private */,
       3,    0,   75,    2, 0x08 /* Private */,
       4,    0,   76,    2, 0x08 /* Private */,
       5,    0,   77,    2, 0x08 /* Private */,
       6,    0,   78,    2, 0x08 /* Private */,
       7,    0,   79,    2, 0x08 /* Private */,
       8,    0,   80,    2, 0x08 /* Private */,
       9,    1,   81,    2, 0x08 /* Private */,
      11,    1,   84,    2, 0x08 /* Private */,
      13,    1,   87,    2, 0x08 /* Private */,
      15,    0,   90,    2, 0x08 /* Private */,
      16,    0,   91,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Peritia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Peritia *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->newDocument(); break;
        case 1: _t->changePhoto(); break;
        case 2: _t->open(); break;
        case 3: _t->save(); break;
        case 4: _t->saveAs(); break;
        case 5: _t->print(); break;
        case 6: _t->selectFont(); break;
        case 7: _t->setFontBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setFontUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->setFontItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->ShowAbout(); break;
        case 11: _t->AboutScalabli(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Peritia::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_Peritia.data,
    qt_meta_data_Peritia,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Peritia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Peritia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Peritia.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Peritia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
