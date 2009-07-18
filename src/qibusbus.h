#ifndef __Q_IBUS_BUS_H_
#define __Q_IBUS_BUS_H_

#include "qibusobject.h"
#include "qibusserializable.h"
#include "qibusenginedesc.h"
#include "qibuscomponent.h"

class QFileSystemWatcher;
class QDBusConnection;
class IBusProxy;
class DBusProxy;

namespace IBus {

class Bus;
typedef Pointer<Bus> BusPointer;

class Bus : public Object
{
    Q_OBJECT;

protected:

public:
    Bus (void);
    ~Bus (void);
    bool isConnected (void);
    QString createInputContext (const QString &name);
    void registerComponent (const ComponentPointer &component);
    QList<EngineDescPointer> listEngines (void);
    QList<EngineDescPointer> listActiveEngines (void);
    void exit (bool restart = false);
    SerializablePointer ping (const SerializablePointer &data);
    const QDBusConnection &getConnection (void) { return *m_connection; }

private:
    bool open (void);
    void reset (void);
    QString getSocketPath (void);
    QString getAddress (void);

signals:
    void disconnected (void);
    void connected (void);

private slots:
    void slotAddressChanged (const QString &path);
    void slotIBusDisconnected (void);

private:
    QFileSystemWatcher *m_watcher;
    QDBusConnection *m_connection;
    DBusProxy *m_dbus;
    IBusProxy *m_ibus;
};

};

#endif
