#include "kaartslot.h"
#include "idkaart.h"
#include "slotexception.h"

map<string, IdKaart*> KaartSlot::idKaarten = {};

KaartSlot::KaartSlot(string plaats,QLineEdit *i) : plaats(plaats), vergrendeld(false), input(i)
{

}

void KaartSlot::ontgrendel(string eenSleutel)
{
    map <string, IdKaart*>::iterator i;
    i = idKaarten.find(eenSleutel);
    if(i == idKaarten.end()) // error 1
        throw SlotException(eenSleutel, plaats);
    else if (i->second->heeftToegang(this))
        vergrendeld = false;
    else // error 2
        throw SlotException(i->first, "");
}

void KaartSlot::vergrendel()
{
    vergrendeld = true;
}

QLineEdit* KaartSlot::getLineInput()
{
    return input;
}

bool KaartSlot::isVergrendeld()
{
    return vergrendeld;
}

void KaartSlot::voegIdKaartToe(IdKaart *eenIdKaart)
{
    std::map<string, IdKaart*>::iterator i;
    i = idKaarten.find(eenIdKaart->userId());
    if(i == idKaarten.end())
        idKaarten[eenIdKaart->userId()] = eenIdKaart;
}

void KaartSlot::verwijderIdKaart(string eenId)
{
    std::map<string, IdKaart*>::iterator i;
    i = idKaarten.find(eenId);
    idKaarten.erase(i);
}

map<string, IdKaart*> KaartSlot::returnIdKaarten()
{
    return idKaarten;
}
