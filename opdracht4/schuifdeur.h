#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H

#include "deur.h"

using namespace std;

class QPaintDevice;
class Sensor;


class SchuifDeur : public Deur
{
public:
    SchuifDeur(bool,int,int,unsigned int, Sensor*);
    SchuifDeur(bool,int,int,unsigned int, Sensor*, Slot*);
    virtual void teken(QPaintDevice*);
private:
    Sensor *sens;
};

#endif // SCHUIFDEUR_H
