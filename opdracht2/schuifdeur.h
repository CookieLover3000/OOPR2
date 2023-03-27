#ifndef SCHUIFDEUR_H
#define SCHUIFDEUR_H

#include <memory>

#include "deur.h"
#include "sensor.h"

using namespace std;

class QPaintDevice;

class SchuifDeur : public Deur
{
public:
    SchuifDeur(bool,int,int,unsigned int, Sensor*);
    SchuifDeur(bool,int,int,unsigned int, Sensor*, Slot*);
    virtual void teken(QPaintDevice*);
    virtual void sluit();
    virtual void open();
private:
    Sensor *sens;
};

#endif // SCHUIFDEUR_H
