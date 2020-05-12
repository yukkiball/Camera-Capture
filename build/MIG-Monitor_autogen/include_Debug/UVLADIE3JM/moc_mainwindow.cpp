/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata0[456];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 10), // "openEditor"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 16), // "QTreeWidgetItem*"
QT_MOC_LITERAL(4, 40, 4), // "item"
QT_MOC_LITERAL(5, 45, 6), // "column"
QT_MOC_LITERAL(6, 52, 11), // "closeEditor"
QT_MOC_LITERAL(7, 64, 11), // "updateFrame"
QT_MOC_LITERAL(8, 76, 26), // "on_actionConnect_triggered"
QT_MOC_LITERAL(9, 103, 29), // "on_actionDisconnect_triggered"
QT_MOC_LITERAL(10, 133, 30), // "on_actionSetSavePath_triggered"
QT_MOC_LITERAL(11, 164, 35), // "on_actionUploadParameters_tri..."
QT_MOC_LITERAL(12, 200, 24), // "on_actionStart_triggered"
QT_MOC_LITERAL(13, 225, 23), // "on_actionStop_triggered"
QT_MOC_LITERAL(14, 249, 23), // "on_actionRecord_toggled"
QT_MOC_LITERAL(15, 273, 24), // "on_processButton_toggled"
QT_MOC_LITERAL(16, 298, 24), // "on_actionBoard_triggered"
QT_MOC_LITERAL(17, 323, 14), // "receiveSaveSet"
QT_MOC_LITERAL(18, 338, 6), // "size_t"
QT_MOC_LITERAL(19, 345, 17), // "ReceiveAnalogData"
QT_MOC_LITERAL(20, 363, 15), // "QVector<double>"
QT_MOC_LITERAL(21, 379, 19), // "ReceiveFinishSignal"
QT_MOC_LITERAL(22, 399, 12), // "receiveWidth"
QT_MOC_LITERAL(23, 412, 13), // "receiveLength"
QT_MOC_LITERAL(24, 426, 10), // "displayROI"
QT_MOC_LITERAL(25, 437, 18) // "ConnectLostHandler"

    },
    "MainWindow\0openEditor\0\0QTreeWidgetItem*\0"
    "item\0column\0closeEditor\0updateFrame\0"
    "on_actionConnect_triggered\0"
    "on_actionDisconnect_triggered\0"
    "on_actionSetSavePath_triggered\0"
    "on_actionUploadParameters_triggered\0"
    "on_actionStart_triggered\0"
    "on_actionStop_triggered\0on_actionRecord_toggled\0"
    "on_processButton_toggled\0"
    "on_actionBoard_triggered\0receiveSaveSet\0"
    "size_t\0ReceiveAnalogData\0QVector<double>\0"
    "ReceiveFinishSignal\0receiveWidth\0"
    "receiveLength\0displayROI\0ConnectLostHandler"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    2,  109,    2, 0x08 /* Private */,
       6,    0,  114,    2, 0x08 /* Private */,
       7,    1,  115,    2, 0x08 /* Private */,
       8,    0,  118,    2, 0x08 /* Private */,
       9,    0,  119,    2, 0x08 /* Private */,
      10,    0,  120,    2, 0x08 /* Private */,
      11,    0,  121,    2, 0x08 /* Private */,
      12,    0,  122,    2, 0x08 /* Private */,
      13,    0,  123,    2, 0x08 /* Private */,
      14,    1,  124,    2, 0x08 /* Private */,
      15,    1,  127,    2, 0x08 /* Private */,
      16,    0,  130,    2, 0x08 /* Private */,
      17,    2,  131,    2, 0x08 /* Private */,
      19,    1,  136,    2, 0x08 /* Private */,
      21,    0,  139,    2, 0x08 /* Private */,
      22,    1,  140,    2, 0x08 /* Private */,
      23,    1,  143,    2, 0x08 /* Private */,
      24,    1,  146,    2, 0x08 /* Private */,
      25,    0,  149,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 18,    2,    2,
    QMetaType::Void, 0x80000000 | 20,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void, QMetaType::QImage,    2,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->openEditor((*reinterpret_cast< QTreeWidgetItem*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->closeEditor(); break;
        case 2: _t->updateFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 3: _t->on_actionConnect_triggered(); break;
        case 4: _t->on_actionDisconnect_triggered(); break;
        case 5: _t->on_actionSetSavePath_triggered(); break;
        case 6: _t->on_actionUploadParameters_triggered(); break;
        case 7: _t->on_actionStart_triggered(); break;
        case 8: _t->on_actionStop_triggered(); break;
        case 9: _t->on_actionRecord_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 10: _t->on_processButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_actionBoard_triggered(); break;
        case 12: _t->receiveSaveSet((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 13: _t->ReceiveAnalogData((*reinterpret_cast< QVector<double>(*)>(_a[1]))); break;
        case 14: _t->ReceiveFinishSignal(); break;
        case 15: _t->receiveWidth((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 16: _t->receiveLength((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 17: _t->displayROI((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 18: _t->ConnectLostHandler(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
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
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }
    return _id;
}
struct qt_meta_stringdata_SaveSetDialog_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SaveSetDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SaveSetDialog_t qt_meta_stringdata_SaveSetDialog = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SaveSetDialog"
QT_MOC_LITERAL(1, 14, 11), // "sendSaveSet"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 6), // "size_t"
QT_MOC_LITERAL(4, 34, 21), // "on_BrowserBtn_clicked"
QT_MOC_LITERAL(5, 56, 21) // "on_ConfirmBtn_clicked"

    },
    "SaveSetDialog\0sendSaveSet\0\0size_t\0"
    "on_BrowserBtn_clicked\0on_ConfirmBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SaveSetDialog[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   34,    2, 0x08 /* Private */,
       5,    0,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SaveSetDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SaveSetDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendSaveSet((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< size_t(*)>(_a[2]))); break;
        case 1: _t->on_BrowserBtn_clicked(); break;
        case 2: _t->on_ConfirmBtn_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SaveSetDialog::*)(QString , size_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SaveSetDialog::sendSaveSet)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SaveSetDialog::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_SaveSetDialog.data,
    qt_meta_data_SaveSetDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SaveSetDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SaveSetDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SaveSetDialog.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int SaveSetDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void SaveSetDialog::sendSaveSet(QString _t1, size_t _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
