#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H

#include "slot.h"

class SleutelSlot : public Slot
{
public:
    SleutelSlot(std::string);
    ~SleutelSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(std::string ontgrendelSleutel);
private:
    std::string sleutel;
    bool vergrendeld;
};

#endif // SLEUTELSLOT_H
