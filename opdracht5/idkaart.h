#ifndef IDKAART_H
#define IDKAART_H
#include <string>
#include <vector>

using namespace std;

class KaartSlot;
class IdKaart
{
public:
    IdKaart(string, string, string);
    virtual ~IdKaart(){}
    virtual string userId();
    virtual void geefToegang(KaartSlot*);
    virtual void verwijderToegang(KaartSlot*);
    virtual bool heeftToegang(KaartSlot*);
private:
    string id;
    vector <KaartSlot*> toegang;
    string naamEigenaar;
    string adresEigenaar;
    KaartSlot *kaart;
};

#endif // IDKAART_H
