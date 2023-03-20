#ifndef CODESLOT_H
#define CODESLOT_H

#include "slot.h"

using namespace std;

class CodeSlot : public Slot
{
public:
    CodeSlot(int, QLineEdit*);
    ~CodeSlot();
    virtual void vergrendel();
    virtual bool isVergrendeld();
    virtual void ontgrendel(std::string eenCode);
    virtual QLineEdit* getLineInput();
private:
    int code;
    bool vergrendeld;
    QLineEdit *input;
};

#endif // CODESLOT_H
