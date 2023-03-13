#ifndef HERKENNINGSSLOT_H
#define HERKENNINGSSLOT_H

#include "slot.h"

using namespace std;

class Afdrukker;
class HerkenningsSlot : public Slot
{
public:
    HerkenningsSlot(QLineEdit*, Afdrukker*);
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(string);
    virtual void toonKaartenbak(); // Niet zeker of dit void moet zijn.
    virtual void voegAutorissatieToe(string, bool);
    virtual QLineEdit* getLineInput();
private:
    map <string,bool> kaartenbak;
    bool vergrendeld;
    Afdrukker *afdruk;
    QLineEdit *input;
};

#endif // HERKENNINGSSLOT_H
