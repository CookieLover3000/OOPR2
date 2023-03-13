#include "herkenningsslot.h"
#include "afdrukker.h"

HerkenningsSlot::HerkenningsSlot(QLineEdit* i, Afdrukker *a) : vergrendeld(false), afdruk(a), input(i)
{}

void HerkenningsSlot::vergrendel()
{
    vergrendeld = true;
}

bool HerkenningsSlot::isVergrendeld()
{
    return vergrendeld;
}

void HerkenningsSlot::ontgrendel(string naam)
{
    map <string, bool>::iterator i;
    for (i = kaartenbak.begin(); i != kaartenbak.end(); i++)
        if(i->first.compare(naam) == 0 && i->second)
        {
            vergrendeld = false;
            return;
        }
}

void HerkenningsSlot::toonKaartenbak()
{
    map<string, bool>::iterator i;
    afdruk->clearMedium();
    for(i=kaartenbak.begin();i!=kaartenbak.end();i++)
        afdruk->toonText(i->first + "       Toegang: " + to_string(i->second));
}

void HerkenningsSlot::voegAutorissatieToe(string a, bool b)
{
    kaartenbak[a] = b;
    toonKaartenbak();
}

QLineEdit* HerkenningsSlot::getLineInput()
{
    return input;
}
