/*
    This file is part of the KDE libraries

    SPDX-FileCopyrightText: 2006 Michaël Larouche <michael.larouche@kdemail.net>

    SPDX-License-Identifier: LGPL-2.0-or-later
*/
#ifndef KDECORE_KMESSAGE_H
#define KDECORE_KMESSAGE_H

#include <kcoreaddons_export.h>

#include <QString>

#if KCOREADDONS_ENABLE_DEPRECATED_SINCE(5, 97)

class KMessageHandler;
/**
 * @brief Display an informative message using a KMessageHandler.
 *
 * This class does not define how to display a message, it is just
 * a clean interface for developers to use.
 * The job is done by the current KMessageHandler set in the class.
 *
 * If no KMessageHandler is currently registered in KMessage,
 * the message will be outputed to stderr.
 *
 * Use KMessage::setMessageHandler() to use a KMessageHandler.
 *
 * @code
 * KMessage::setMessageHandler( new KMessageBoxHandler(this) );
 * // some operation
 *
 * KMessage::message( KMessage::Error, i18n("Could not load service. Use kbuildsycoca to fix the service database."), i18n("KService") );
 * @endcode
 *
 * Some KMessageHandler are already done such as KMessageBoxMessageHandler and KPassivePopupMessageHandler.
 * @author Michaël Larouche <michael.larouche@kdemail.net>
 */
namespace KMessage
{
enum MessageType {
    /**
     * Error message.
     * Display critical information that affect the behavior of the application.
     */
    Error,
    /**
     * Information message.
     * Display useful information to the user.
     */
    Information,
    /**
     * Warning message.
     * Display a message that could affect the behavior of the application.
     */
    Warning,
    /**
     * Sorry message.
     * Display a message explaining that a task couldn't be accomplished.
     */
    Sorry,
    /**
     * Fatal message.
     * Display a message before the application fail and close itself.
     */
    Fatal,
};

/**
 * @brief Display a long message of a certain type.
 * A long message span on multiple lines and can have a title.
 *
 * @param messageType Currrent type of message. See MessageType enum.
 * @param text Long message to be displayed.
 * @param title Title to be used. This is optional.
 *
 * @deprecated Since 5.97. Use Qt logging or custom message handling.
 */
KCOREADDONS_EXPORT
KCOREADDONS_DEPRECATED_VERSION(5, 97, "Use Qt logging or custom message handling.")
void message(KMessage::MessageType messageType, const QString &text, const QString &caption = QString());

/**
 * @brief Set the current KMessageHandler
 * Note that this method takes ownership of the KMessageHandler.
 * @param handler Instance of a real KMessageHandler.
 *
 * @warning This function isn't thread-safe. You don't want to
 *          change the message handler during the program's
 *          execution anyways. Do so <b>only</b> at start-up.
 *
 * @deprecated Since 5.97. Use Qt logging or custom message handling.
 */
KCOREADDONS_EXPORT
KCOREADDONS_DEPRECATED_VERSION(5, 97, "Use Qt logging or custom message handling.")
void setMessageHandler(KMessageHandler *handler);
}

/**
 * \class KMessageHandler kmessage.h <KMessageHandler>
 *
 * @brief Abstract class for KMessage handler.
 * This class define how KMessage display a message.
 *
 * Reimplement the virtual methods then set your custom
 * KMessageHandler using KMessage::setMessageHandler()
 *
 * @author Michaël Larouche <michael.larouche@kdemail.net>
 * @deprecated Since 5.97, technology not in use.
 */
class KCOREADDONS_EXPORT KMessageHandler
{
public:
    virtual ~KMessageHandler()
    {
    } // KF6 TODO: de-inline (-Wweak-vtables)
    /**
     * @brief Display a long message of a certain type.
     * A long message span on multiple lines and can have a title.
     *
     * @param type Currrent type of message. See MessageType enum.
     * @param text Long message to be displayed.
     * @param title Title to be used. This is optional.
     */
    virtual void message(KMessage::MessageType type, const QString &text, const QString &title) = 0;
};

#endif

#endif
