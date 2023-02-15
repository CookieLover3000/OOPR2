#ifndef CODESLOT_H
#define CODESLOT_H

#include "slot.h"

class CodeSlot : public Slot
{
public:
    CodeSlot(int);
    ~CodeSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(std::string eenCode);
private:
    int code;
    bool vergrendeld;
};

#endif // CODESLOT_H
