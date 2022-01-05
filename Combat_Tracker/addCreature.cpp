//#include <QChar>
#include "addCreature.h"



Creature::Creature(QString Name, int Hp, int Ac, int Ini, int objCount)
{
    name = Name;
    hp = Hp;
    ac=Ac;
    ini=Ini;

    objCount +=1;
}

void Creature::display(Creature Object)
{

}
