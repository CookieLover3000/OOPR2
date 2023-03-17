#include "kaartslot.h"
#include "idkaart.h"
//#include "slotexception.h"
KaartSlot::KaartSlot(string plaats,QLineEdit *i) : plaats(plaats), input(i), vergrendeld(false)
{

}

void KaartSlot::ontgrendel(string eenSleutel)
{
    map <string, IdKaart*>::iterator i;

    for (i = idKaarten.begin(); i != idKaarten.end(); i++)
        if(i->first.compare(eenSleutel) == 0)
        {
            if(i->second->heeftToegang(this))
                vergrendeld = false;
            return;
        }

//    i = idKaarten.find(eenSleutel);
//    if(i != idKaarten.end())
//        if(i->second->heeftToegang(this))
//            vergrendeld = false;
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
    idKaarten.erase(eenId);
}

map<string, IdKaart*> KaartSlot::returnIdKaarten()
{
    return idKaarten;
}
