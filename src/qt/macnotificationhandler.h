// Copyright (c) 2011-2013 The Solidreserve developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SOLIDRESERVE_QT_MACNOTIFICATIONHANDLER_H
#define SOLIDRESERVE_QT_MACNOTIFICATIONHANDLER_H

#include <QObject>

/** Macintosh-specific notification handler (supports UserNotificationCenter and Growl).
 */
class MacNotificationHandler : public QObject
{
    Q_OBJECT

public:
    /** shows a 10.8+ UserNotification in the UserNotificationCenter
     */
    void showNotification(const QString& title, const QString& text);

    /** executes AppleScript */
    void sendAppleScript(const QString& script);

    /** check if OS can handle UserNotifications */
    bool hasUserNotificationCenterSupport(void);
    static MacNotificationHandler* instance();
};


#endif // SOLIDRESERVE_QT_MACNOTIFICATIONHANDLER_H
