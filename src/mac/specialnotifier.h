/**
 * Copyright (c) 2018, Dubo Dubon Duponey <dubodubonduponey+github@pm.me>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification, are permitted provided that the following conditions are met:
 *
 * Redistributions of source code must retain the above copyright notice, this list of conditions and the following disclaimer.
 * Redistributions in binary form must reproduce the above copyright notice, this list of conditions and the following disclaimer in the documentation and/or other materials provided with the distribution.
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef MAC_NOTIFIER_H
#define MAC_NOTIFIER_H

#include "libduboplatipus/basenotifier.h"

/**
 * @brief The SpecialNotifier class is an implementation of the virtual BaseNotifier for Mac.
 */
class SpecialNotifier : public DuboPlatipus::BaseNotifier
{
public:
    explicit SpecialNotifier(QObject * parent = nullptr);

    bool notify(const QString &appName, const QString &title, const QString &subtitle, const QString &text, const QIcon & icon = QIcon(), int time = 10000);
    bool canNotify();

private:
    void notifyCenter(const QString &title, const QString &subtitle, const QString &text);
    void notifyGrowl(const QString & growlApp, const QString &appName, const QString &title, const QString &text, const QIcon &icon);
    void sendAppleScript(const QString &script);
};


#endif // MAC_NOTIFIER_H
