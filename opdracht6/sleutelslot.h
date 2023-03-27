#ifndef SLEUTELSLOT_H
#define SLEUTELSLOT_H

#include "slot.h"

using namespace std;

class SleutelSlot : public Slot
{
public:
    SleutelSlot(std::string, QLineEdit*);
    ~SleutelSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(std::string ontgrendelSleutel);
    virtual QLineEdit* getLineInput();
private:
    std::string sleutel;
    bool vergrendeld;
    QLineEdit* input;
};

#endif // SLEUTELSLOT_H
