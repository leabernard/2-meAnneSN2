/****************************************************************************
** Meta object code from reading C++ file 'tcp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.14.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../tcp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tcp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.14.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_tcp_t {
    QByteArrayData data[11];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_tcp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_tcp_t qt_meta_stringdata_tcp = {
    {
QT_MOC_LITERAL(0, 0, 3), // "tcp"
QT_MOC_LITERAL(1, 4, 29), // "onDisplayMessageButtonClicked"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 22), // "onConnectButtonClicked"
QT_MOC_LITERAL(4, 58, 17), // "onSocketConnected"
QT_MOC_LITERAL(5, 76, 20), // "onSocketDisconnected"
QT_MOC_LITERAL(6, 97, 26), // "onSendMessageButtonClicked"
QT_MOC_LITERAL(7, 124, 17), // "onSocketReadyRead"
QT_MOC_LITERAL(8, 142, 21), // "onServerNewConnection"
QT_MOC_LITERAL(9, 164, 20), // "onClientDisconnected"
QT_MOC_LITERAL(10, 185, 17) // "onClientReadyRead"

    },
    "tcp\0onDisplayMessageButtonClicked\0\0"
    "onConnectButtonClicked\0onSocketConnected\0"
    "onSocketDisconnected\0onSendMessageButtonClicked\0"
    "onSocketReadyRead\0onServerNewConnection\0"
    "onClientDisconnected\0onClientReadyRead"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_tcp[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void tcp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<tcp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onDisplayMessageButtonClicked(); break;
        case 1: _t->onConnectButtonClicked(); break;
        case 2: _t->onSocketConnected(); break;
        case 3: _t->onSocketDisconnected(); break;
        case 4: _t->onSendMessageButtonClicked(); break;
        case 5: _t->onSocketReadyRead(); break;
        case 6: _t->onServerNewConnection(); break;
        case 7: _t->onClientDisconnected(); break;
        case 8: _t->onClientReadyRead(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject tcp::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_tcp.data,
    qt_meta_data_tcp,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *tcp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *tcp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_tcp.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int tcp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
