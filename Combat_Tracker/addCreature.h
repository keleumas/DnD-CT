#ifndef ADDCREATURE_H
#define ADDCREATURE_H
//#include "mainwindow.h"
//#include "ui_mainwindow.h"
#include <QString>
#include <vector>

//QVector<Creature> c;

class Creature
{
    QString name;
   int hp, ac, ini;
public:

   Creature (QString Name, int Hp, int Ac, int Ini, int ObjCount);

   void display(Creature object);

};

#endif // ADDCREATURE_H

