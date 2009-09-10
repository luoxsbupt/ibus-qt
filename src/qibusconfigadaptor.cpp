/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -a qibusconfigadaptor -c IBusConfigAdaptor -v org.freedesktop.IBus.Config.xml org.freedesktop.IBus.Config
 *
 * qdbusxml2cpp is Copyright (C) 2009 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "qibusconfigadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class IBusConfigAdaptor
 */

IBusConfigAdaptor::IBusConfigAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

IBusConfigAdaptor::~IBusConfigAdaptor()
{
    // destructor
}

void IBusConfigAdaptor::Destroy()
{
    // handle method call org.freedesktop.IBus.Config.Destroy
    QMetaObject::invokeMethod(parent(), "Destroy");
}

QDBusVariant IBusConfigAdaptor::GetValue(const QString &section, const QString &name)
{
    // handle method call org.freedesktop.IBus.Config.GetValue
    QDBusVariant out0;
    QMetaObject::invokeMethod(parent(), "GetValue", Q_RETURN_ARG(QDBusVariant, out0), Q_ARG(QString, section), Q_ARG(QString, name));
    return out0;
}

void IBusConfigAdaptor::SetValue(const QString &section, const QString &name, const QDBusVariant &value)
{
    // handle method call org.freedesktop.IBus.Config.SetValue
    QMetaObject::invokeMethod(parent(), "SetValue", Q_ARG(QString, section), Q_ARG(QString, name), Q_ARG(QDBusVariant, value));
}

