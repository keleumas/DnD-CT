#include "creature.h"

creature::creature(QObject *parent, QString name, int hp, int ac, int ini) : QObject(parent)
{
    this->name=name;
    this->hp=hp;
    this->ac=ac;
    this->ini=ini;
}
