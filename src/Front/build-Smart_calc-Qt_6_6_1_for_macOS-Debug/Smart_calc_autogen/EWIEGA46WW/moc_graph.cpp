/****************************************************************************
** Meta object code from reading C++ file 'graph.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Smart_calc/graph.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'graph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGraphENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGraphENDCLASS = QtMocHelpers::stringData(
    "Graph",
    "firstWindow",
    "",
    "on_pushButton_clicked",
    "on_pushButton_back_clicked",
    "accuracy_x",
    "xBegin",
    "xEnd",
    "double*",
    "step"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGraphENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[6];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[27];
    char stringdata5[11];
    char stringdata6[7];
    char stringdata7[5];
    char stringdata8[8];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGraphENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGraphENDCLASS_t qt_meta_stringdata_CLASSGraphENDCLASS = {
    {
        QT_MOC_LITERAL(0, 5),  // "Graph"
        QT_MOC_LITERAL(6, 11),  // "firstWindow"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 21),  // "on_pushButton_clicked"
        QT_MOC_LITERAL(41, 26),  // "on_pushButton_back_clicked"
        QT_MOC_LITERAL(68, 10),  // "accuracy_x"
        QT_MOC_LITERAL(79, 6),  // "xBegin"
        QT_MOC_LITERAL(86, 4),  // "xEnd"
        QT_MOC_LITERAL(91, 7),  // "double*"
        QT_MOC_LITERAL(99, 4)   // "step"
    },
    "Graph",
    "firstWindow",
    "",
    "on_pushButton_clicked",
    "on_pushButton_back_clicked",
    "accuracy_x",
    "xBegin",
    "xEnd",
    "double*",
    "step"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGraphENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    3,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double, QMetaType::Double, 0x80000000 | 8,    6,    7,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject Graph::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGraphENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGraphENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGraphENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Graph, std::true_type>,
        // method 'firstWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_back_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accuracy_x'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<double *, std::false_type>
    >,
    nullptr
} };

void Graph::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Graph *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firstWindow(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_back_clicked(); break;
        case 3: _t->accuracy_x((*reinterpret_cast< std::add_pointer_t<double>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<double>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<double*>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Graph::*)();
            if (_t _q_method = &Graph::firstWindow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *Graph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Graph::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGraphENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Graph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void Graph::firstWindow()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
