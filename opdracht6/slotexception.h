#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include <string>

using namespace std;
class KaartSlot;
class SlotException
{
public:
    SlotException(string, string);
    ~SlotException(){}
    virtual string kaartVanBinnendringer();
    virtual string plaatsVanHetSlot();
private:
    string kaartID;
    string slotPlaats;
};

#endif // SLOTEXCEPTION_H
