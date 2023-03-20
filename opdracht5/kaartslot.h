#ifndef KAARTSLOT_H
#define KAARTSLOT_H

#include "slot.h"

using namespace std;

class IdKaart;
//class SlotException;
class KaartSlot : public Slot
{
public:
    KaartSlot(string,QLineEdit *i);
    virtual void ontgrendel(string);
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual QLineEdit* getLineInput();
    virtual void voegIdKaartToe(IdKaart*);
    virtual void verwijderIdKaart(string);
    virtual map<string, IdKaart*> returnIdKaarten();
private:
    string plaats;
    bool vergrendeld;
    static map <string,IdKaart*> idKaarten;
//    IdKaart *ID;
//    SlotException *ex;
    QLineEdit* input;
};

#endif // KAARTSLOT_H
