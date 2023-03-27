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
    virtual void teken(QPaintDevice*);
    virtual void sluit();
    virtual void open();
private:
    Sensor *sens;
};

#endif // SCHUIFDEUR_H
