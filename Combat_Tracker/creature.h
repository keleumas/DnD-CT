#ifndef CREATURE_H
#define CREATURE_H

#include <QObject>


class Creature : public QObject
{
    Q_OBJECT

    QString name;
    int hp;
    int ac;
    int ini;
    static int objCount;

public:


    explicit Creature(QObject *parent = nullptr, QString name="NaC" ,int hp=1,int ac=1,int ini=1);
    ~Creature();

signals:

};

//Functions for logic

void sendDataToCreatureConstructor (QString name ,int hp,int ac,int ini);


#endif // CREATURE_H
