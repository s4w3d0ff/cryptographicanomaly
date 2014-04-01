#ifndef CRYPTOGRAPHICANOMALYADDRESSVALIDATOR_H
#define CRYPTOGRAPHICANOMALYADDRESSVALIDATOR_H

#include <QValidator>

/** Base58 entry widget validator.
   Corrects near-miss characters and refuses characters that are not part of base58.
 */
class CryptographicanomalyAddressValidator : public QValidator
{
    Q_OBJECT

public:
    explicit CryptographicanomalyAddressValidator(QObject *parent = 0);

    State validate(QString &input, int &pos) const;

    static const int MaxAddressLength = 35;
};

#endif // CRYPTOGRAPHICANOMALYADDRESSVALIDATOR_H
