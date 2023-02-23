#ifndef CONV_H
#define CONV_H

#include <QObject>

class Conv : public QObject
{
    Q_OBJECT
public:
    explicit Conv(QObject *parent = nullptr);
    const QString &convert(int x);

signals:

};

#endif // CONV_H
