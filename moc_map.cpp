/****************************************************************************
** Meta object code from reading C++ file 'map.h'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.11.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "src/map.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'map.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.11.0. It"
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
struct qt_meta_tag_ZN3MapE_t {};
} // unnamed namespace

template <> constexpr inline auto Map::qt_create_metaobjectdata<qt_meta_tag_ZN3MapE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
        "Map",
        "on_pushButton_clicked",
        "",
        "on_comboBox_currentTextChanged",
        "arg1",
        "slot_ready_read",
        "slot_download",
        "on_pushButton_2_clicked",
        "on_pushButton_3_clicked"
    };

    QtMocHelpers::UintData qt_methods {
        // Slot 'on_pushButton_clicked'
        QtMocHelpers::SlotData<void()>(1, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_comboBox_currentTextChanged'
        QtMocHelpers::SlotData<void(const QString &)>(3, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::QString, 4 },
        }}),
        // Slot 'slot_ready_read'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'slot_download'
        QtMocHelpers::SlotData<void(qint64, qint64)>(6, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::LongLong, 2 }, { QMetaType::LongLong, 2 },
        }}),
        // Slot 'on_pushButton_2_clicked'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButton_3_clicked'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<Map, qt_meta_tag_ZN3MapE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject Map::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3MapE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3MapE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN3MapE_t>.metaTypes,
    nullptr
} };

void Map::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Map *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_comboBox_currentTextChanged((*reinterpret_cast<std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->slot_ready_read(); break;
        case 3: _t->slot_download((*reinterpret_cast<std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast<std::add_pointer_t<qint64>>(_a[2]))); break;
        case 4: _t->on_pushButton_2_clicked(); break;
        case 5: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *Map::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Map::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN3MapE_t>.strings))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Map::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
