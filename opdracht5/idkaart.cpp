#include "idkaart.h"
#include "kaartslot.h"

IdKaart::IdKaart(string a, string b, string c) : id(a), naamEigenaar(b), adresEigenaar(c)
{

}

string IdKaart::userId()
{
    return id;
}

void IdKaart::geefToegang(KaartSlot *a)
{
    toegang.push_back(a);
}

void IdKaart::verwijderToegang(KaartSlot *a)
{
    vector<KaartSlot*>::iterator i;
    for(i=toegang.begin(); i != toegang.end(); i++)
        if(*i == a)
            toegang.erase(i);
}

bool IdKaart::heeftToegang(KaartSlot *a)
{
    vector<KaartSlot*>::iterator i;
    for(i=toegang.begin(); i != toegang.end(); i++)
        if(*i == a)
            return true;
    return false;
}
