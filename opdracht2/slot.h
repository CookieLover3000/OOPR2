#ifndef SLOT_H
#define SLOT_H

#include <string>

class Slot
{
public:
    virtual void ontgrendel(std::string ontgrendelSleutel) = 0;
    virtual void vergrendel() = 0;
    virtual bool isVergrendeld() = 0;
};

#endif // SLOT_H
