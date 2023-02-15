#include "codeslot.h"
#include <iostream>
CodeSlot::CodeSlot(int a) : code(a), vergrendeld(false)
{

}
CodeSlot::~CodeSlot()
{

}
void CodeSlot::vergrendel()
{
    vergrendeld = true;
}

bool CodeSlot::isVergrendeld()
{
    return vergrendeld;
}

void CodeSlot::ontgrendel(std::string eenCode)
{
    std::string temp = std::to_string(code);
    if(temp.compare(eenCode) == 0)
        vergrendeld = false;
}
