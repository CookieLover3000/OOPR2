#ifndef DEUR_H
#define DEUR_H

#include <utility>

#include "slot.h"

using namespace std;

class QPaintDevice;

class Deur
{
public:
    Deur(bool, int, int, unsigned int);
    Deur(bool, int, int, unsigned int, Slot*);
    virtual ~Deur();
    virtual void open();
    virtual void sluit();
    virtual void teken(QPaintDevice*);
    virtual bool isDeurOpen() const;
    virtual Slot* returnSlot();
    virtual unsigned int deurLengte() const;
    virtual std::pair<int,int> coordinaten() const;
    virtual void zetStatus(bool);
private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned int lengte;
    Slot *slot;
    bool aangemaakt = false;
};

#endif // DEUR_H
