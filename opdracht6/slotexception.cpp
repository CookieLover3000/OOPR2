#include "slotexception.h"
#include "kaartslot.h"

SlotException::SlotException(string id, KaartSlot* s, string p) : kaartID(id), slotPlaats(p), slot(s)
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
