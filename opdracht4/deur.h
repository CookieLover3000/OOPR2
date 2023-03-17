#ifndef DEUR_H
#define DEUR_H

//#include "slot.h"
#include <list>
#include <memory>


using namespace std;

class Slot;
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
    virtual list <std::shared_ptr<Slot>> returnSlot();
    virtual unsigned int deurLengte() const;
    virtual std::pair<int,int> coordinaten() const;
    virtual void zetStatus(bool);
    virtual void maakSlot(std::shared_ptr<Slot>);

private:
    bool status;
    int x_coordinaat;
    int y_coordinaat;
    unsigned int lengte;

    Slot *slot;
    list <std::shared_ptr<Slot>> sloten;
//    bool aangemaakt = false;
};

#endif // DEUR_H
