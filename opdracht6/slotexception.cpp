#include "slotexception.h"
#include "kaartslot.h"

SlotException::SlotException(string id, string p) : kaartID(id), slotPlaats(p)
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
