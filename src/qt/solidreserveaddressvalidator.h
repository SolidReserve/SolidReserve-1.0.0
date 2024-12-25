// Copyright (c) 2011-2014 The Solidreserve developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef SOLIDRESERVE_QT_SOLIDRESERVEADDRESSVALIDATOR_H
#define SOLIDRESERVE_QT_SOLIDRESERVEADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator, checks for valid characters and
 * removes some whitespace.
 */
class SolidreserveAddressEntryValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SolidreserveAddressEntryValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

/** Solidreserve address widget validator, checks for a valid solidreserve address.
 */
class SolidreserveAddressCheckValidator : public QValidator
{
    Q_OBJECT

public:
    explicit SolidreserveAddressCheckValidator(QObject* parent);

    State validate(QString& input, int& pos) const;
};

#endif // SOLIDRESERVE_QT_SOLIDRESERVEADDRESSVALIDATOR_H
