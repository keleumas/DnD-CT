#include "creature.h"

Creature::Creature(QObject *parent, QString name, int hp, int ac, int ini) : QObject(parent)
{
    this->name=name;
    this->hp=hp;
    this->ac=ac;
    this->ini=ini;
    objCount  ++;
}

Creature::~Creature()
{
    objCount --;
}

void sendDataToCreatureConstructor(QString name, int hp, int ac, int ini)
{
    Creature(nullptr,name, hp, ac, ini);
}
