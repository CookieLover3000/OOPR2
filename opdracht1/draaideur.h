#ifndef DRAAIDEUR_H
#define DRAAIDEUR_H

#include "deur.h"
#include <utility>

using namespace std;

class QPaintDevice;

class Draaideur : public Deur
{
public:
    Draaideur(bool,int,int, unsigned int, bool);
    void teken(QPaintDevice*);
private:
    bool liggend;
};

#endif // DRAAIDEUR_H
