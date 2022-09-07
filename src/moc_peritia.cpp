/****************************************************************************
** Meta object code from reading C++ file 'peritia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.4)
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
#error "This file was generated using the moc from 5.15.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Peritia_t {
    QByteArrayData data[20];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Peritia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Peritia_t qt_meta_stringdata_Peritia = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Peritia"
QT_MOC_LITERAL(1, 8, 11), // "changePhoto"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "open"
QT_MOC_LITERAL(4, 26, 4), // "save"
QT_MOC_LITERAL(5, 31, 6), // "saveAs"
QT_MOC_LITERAL(6, 38, 5), // "print"
QT_MOC_LITERAL(7, 44, 10), // "selectFont"
QT_MOC_LITERAL(8, 55, 11), // "setFontBold"
QT_MOC_LITERAL(9, 67, 4), // "bold"
QT_MOC_LITERAL(10, 72, 16), // "setFontUnderline"
QT_MOC_LITERAL(11, 89, 9), // "underline"
QT_MOC_LITERAL(12, 99, 13), // "setFontItalic"
QT_MOC_LITERAL(13, 113, 6), // "italic"
QT_MOC_LITERAL(14, 120, 9), // "showAbout"
QT_MOC_LITERAL(15, 130, 8), // "showHelp"
QT_MOC_LITERAL(16, 139, 14), // "showPreference"
QT_MOC_LITERAL(17, 154, 13), // "showStatusBar"
QT_MOC_LITERAL(18, 168, 11), // "ShowSummary"
QT_MOC_LITERAL(19, 180, 8) // "text2ASL"

    },
    "Peritia\0changePhoto\0\0open\0save\0saveAs\0"
    "print\0selectFont\0setFontBold\0bold\0"
    "setFontUnderline\0underline\0setFontItalic\0"
    "italic\0showAbout\0showHelp\0showPreference\0"
    "showStatusBar\0ShowSummary\0text2ASL"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Peritia[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    1,   95,    2, 0x08 /* Private */,
      10,    1,   98,    2, 0x08 /* Private */,
      12,    1,  101,    2, 0x08 /* Private */,
      14,    0,  104,    2, 0x08 /* Private */,
      15,    0,  105,    2, 0x08 /* Private */,
      16,    0,  106,    2, 0x08 /* Private */,
      17,    0,  107,    2, 0x08 /* Private */,
      18,    0,  108,    2, 0x08 /* Private */,
      19,    0,  109,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Peritia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Peritia *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changePhoto(); break;
        case 1: _t->open(); break;
        case 2: _t->save(); break;
        case 3: _t->saveAs(); break;
        case 4: _t->print(); break;
        case 5: _t->selectFont(); break;
        case 6: _t->setFontBold((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->setFontUnderline((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->setFontItalic((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 9: _t->showAbout(); break;
        case 10: _t->showHelp(); break;
        case 11: _t->showPreference(); break;
        case 12: _t->showStatusBar(); break;
        case 13: _t->ShowSummary(); break;
        case 14: _t->text2ASL(); break;
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
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
