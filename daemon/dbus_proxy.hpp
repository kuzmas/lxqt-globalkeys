/* BEGIN_COMMON_COPYRIGHT_HEADER
 * (c)LGPL2+
 *
 * Razor - a lightweight, Qt based, desktop toolset
 * http://razor-qt.org
 *
 * Copyright: 2013 Razor team
 * Authors:
 *   Kuzma Shapran <kuzma.shapran@gmail.com>
 *
 * This program or library is free software; you can redistribute it
 * and/or modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.

 * You should have received a copy of the GNU Lesser General
 * Public License along with this library; if not, write to the
 * Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 * Boston, MA 02110-1301 USA
 *
 * END_COMMON_COPYRIGHT_HEADER */

#ifndef GLOBAL_ACTION_DAEMON__DBUS_PROXY__INCLUDED
#define GLOBAL_ACTION_DAEMON__DBUS_PROXY__INCLUDED


#include <QObject>
#include <QDBusConnection>
#include <QDBusObjectPath>


class DBusProxy : public QObject
{
    Q_OBJECT
public:
    DBusProxy(const QDBusConnection &connection, const QString &service, const QDBusObjectPath &path, QObject * parent = 0);

public slots:
    void NameOwnerChanged(const QString &argin0, const QString &argin1, const QString &argin2);

signals:
    void onServiceAppeared(const QString &, const QString &);
    void onServiceDisappeared(const QString &, const QString &);
};

#endif // GLOBAL_ACTION_DAEMON__DBUS_PROXY__INCLUDED
