#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include <string>

using namespace std;
class KaartSlot;
class SlotException
{
public:
    SlotException(string, KaartSlot*, string);
    ~SlotException(){}
    virtual string kaartVanBinnendringer();
    virtual string plaatsVanHetSlot();
private:
    string kaartID;
    string slotPlaats;
    KaartSlot* slot;
};

#endif // SLOTEXCEPTION_H
