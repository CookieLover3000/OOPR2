#include "sleutelslot.h"

SleutelSlot::SleutelSlot(std::string a, QLineEdit *i) : sleutel(a), vergrendeld(false), input(i)
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

QLineEdit* SleutelSlot::getInput()
{
    return input;
}
