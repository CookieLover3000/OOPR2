/*
 * Waarschuwing voor als je dit namaakt,
 * dit is niet hoe het moet!
 * Ik doe dit gewoon omdat ik het leuk vind.
 * Je kan het natuurlijk wel gewoon proberen.
 * Wie weet, misschien wordt het wel gewoon afgetekend.
 * Ik zou er niet op rekenen tho.
 */

#include "slotexception.h"
#include "kaartslot.h"

SlotException::SlotException(string id, KaartSlot* s, string p, int e) : kaartID(id), slotPlaats(p), errorN(e), slot(s)
{
}

string SlotException::kaartVanBinnendringer()
{
    return kaartID;
}

string SlotException::plaatsVanHetSlot()
{
    return slotPlaats;
}

string SlotException::returnErrorMessage()
{
    if(errorN == 1)
        return "geen idkaart voor: " + kaartID;
    else if (errorN == 2)
        return "Geen toegang bij " + slotPlaats + " met kaart: " + kaartID;
    return "uh oh something went wrong with the exception, which means something is really wrong!";
}
