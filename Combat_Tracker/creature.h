#ifndef CREATURE_H
#define CREATURE_H

#include <QObject>

class creature : public QObject
{
    Q_OBJECT

    QString name;
    unsigned int hp;
    unsigned int ac;
    unsigned int ini;

public:
    explicit creature(QObject *parent = nullptr, QString name="NaC" ,int hp=1,int ac=1,int ini=1);

signals:

};

#endif // CREATURE_H
