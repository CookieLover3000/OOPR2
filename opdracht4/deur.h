#ifndef DEUR_H
#define DEUR_H

#include <list>
#include <memory>


using namespace std;

class Slot;
class QPaintDevice;

class Deur
{
public:
    Deur(bool, int, int, unsigned int);
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
    list <std::shared_ptr<Slot>> sloten;
};

#endif // DEUR_H
