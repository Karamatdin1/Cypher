#ifndef VIGENERENCRYPT
#define VIGENERENCRYPT

#include <QObject>

class VigenerEncrypt
{
public:
    QString Encrypt( QString Alphabet, QString Text, QString Key);
    QString Decrypt( QString Alphabet, QString Text, QString Key);
};

#endif // VIGENERENCRYPT

