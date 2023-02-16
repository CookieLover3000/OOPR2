#include "sleutelslot.h"

SleutelSlot::SleutelSlot(std::string a) : sleutel(a), vergrendeld(false)
{}

SleutelSlot::~SleutelSlot()
{}

void SleutelSlot::vergrendel()
{
    vergrendeld = true;
}
bool SleutelSlot::isVergrendeld()
{
    return vergrendeld;
}

void SleutelSlot::ontgrendel(std::string ontgrendelSleutel)
{
    if(sleutel.compare(ontgrendelSleutel) == 0)
        vergrendeld = false;
}
