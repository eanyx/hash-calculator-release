/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.13)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.13. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[16];
    char stringdata0[418];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_filePushButton_clicked"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 25), // "on_hashPushButton_clicked"
QT_MOC_LITERAL(4, 64, 26), // "on_rmd5RadioButton_clicked"
QT_MOC_LITERAL(5, 91, 28), // "on_sha1RadioButton_2_clicked"
QT_MOC_LITERAL(6, 120, 30), // "on_sha224RadioButton_3_clicked"
QT_MOC_LITERAL(7, 151, 30), // "on_sha256RadioButton_4_clicked"
QT_MOC_LITERAL(8, 182, 30), // "on_sha512RadioButton_5_clicked"
QT_MOC_LITERAL(9, 213, 23), // "on_cancelButton_clicked"
QT_MOC_LITERAL(10, 237, 28), // "on_sha384RadioButton_clicked"
QT_MOC_LITERAL(11, 266, 28), // "on_comparePushButton_clicked"
QT_MOC_LITERAL(12, 295, 30), // "on_sha3_224RadioButton_clicked"
QT_MOC_LITERAL(13, 326, 30), // "on_SHA3_256RadioButton_clicked"
QT_MOC_LITERAL(14, 357, 29), // "on_SHA_384RadioButton_clicked"
QT_MOC_LITERAL(15, 387, 30) // "on_SHA3_512RadioButton_clicked"

    },
    "MainWindow\0on_filePushButton_clicked\0"
    "\0on_hashPushButton_clicked\0"
    "on_rmd5RadioButton_clicked\0"
    "on_sha1RadioButton_2_clicked\0"
    "on_sha224RadioButton_3_clicked\0"
    "on_sha256RadioButton_4_clicked\0"
    "on_sha512RadioButton_5_clicked\0"
    "on_cancelButton_clicked\0"
    "on_sha384RadioButton_clicked\0"
    "on_comparePushButton_clicked\0"
    "on_sha3_224RadioButton_clicked\0"
    "on_SHA3_256RadioButton_clicked\0"
    "on_SHA_384RadioButton_clicked\0"
    "on_SHA3_512RadioButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    0,   90,    2, 0x08 /* Private */,
       9,    0,   91,    2, 0x08 /* Private */,
      10,    0,   92,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,

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

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_filePushButton_clicked(); break;
        case 1: _t->on_hashPushButton_clicked(); break;
        case 2: _t->on_rmd5RadioButton_clicked(); break;
        case 3: _t->on_sha1RadioButton_2_clicked(); break;
        case 4: _t->on_sha224RadioButton_3_clicked(); break;
        case 5: _t->on_sha256RadioButton_4_clicked(); break;
        case 6: _t->on_sha512RadioButton_5_clicked(); break;
        case 7: _t->on_cancelButton_clicked(); break;
        case 8: _t->on_sha384RadioButton_clicked(); break;
        case 9: _t->on_comparePushButton_clicked(); break;
        case 10: _t->on_sha3_224RadioButton_clicked(); break;
        case 11: _t->on_SHA3_256RadioButton_clicked(); break;
        case 12: _t->on_SHA_384RadioButton_clicked(); break;
        case 13: _t->on_SHA3_512RadioButton_clicked(); break;
        default: ;
        }
    }
    (void)_a;
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
