/*
 * Waarschuwing voor als je dit namaakt!
 * Dit is niet hoe het moet!
 * Ik doe dit gewoon omdat ik het leuk vind.
 * Je kan het natuurlijk wel gewoon proberen.
 * Wie weet, misschien wordt het wel gewoon afgetekend.
 * Ik zou er niet op rekenen tho.
 */


#ifndef SLOTEXCEPTION_H
#define SLOTEXCEPTION_H

#include <string>

using namespace std;
class KaartSlot;
class SlotException
{
public:
    SlotException(string, KaartSlot*, string, int);
    ~SlotException(){}
    virtual string kaartVanBinnendringer();
    virtual string plaatsVanHetSlot();
    virtual string returnErrorMessage();
private:
    string kaartID;
    string slotPlaats;
    int errorN;
    KaartSlot* slot;
};

#endif // SLOTEXCEPTION_H
