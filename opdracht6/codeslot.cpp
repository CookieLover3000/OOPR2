#include "codeslot.h"
#include <iostream>

CodeSlot::CodeSlot(int a, QLineEdit *i) : code(a),vergrendeld(false), input(i)
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

QLineEdit* CodeSlot::getLineInput()
{
    return input;
}
