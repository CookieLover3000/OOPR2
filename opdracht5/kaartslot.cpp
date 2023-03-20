#include "kaartslot.h"
#include "idkaart.h"

map<string, IdKaart*> KaartSlot::idKaarten = {};

//#include "slotexception.h"
KaartSlot::KaartSlot(string plaats,QLineEdit *i) : plaats(plaats), vergrendeld(false), input(i)
{

}

void KaartSlot::ontgrendel(string eenSleutel)
{
    map <string, IdKaart*>::iterator i;

//    for (i = idKaarten.begin(); i != idKaarten.end(); i++)
//        if(i->first.compare(eenSleutel) == 0)
//        {
//            if(i->second->heeftToegang(this))
//                vergrendeld = false;
//            return;
//        }

    i = idKaarten.find(eenSleutel);
    if(i != idKaarten.end())
        if(i->second->heeftToegang(this))
            vergrendeld = false;
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
