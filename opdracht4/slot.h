#ifndef SLOT_H
#define SLOT_H

#include <string>
#include <QLineEdit>

using namespace std;

class Slot
{
public:
    virtual ~Slot(){}
    virtual void ontgrendel(std::string ontgrendelSleutel) = 0;
    virtual void vergrendel() = 0;
    virtual bool isVergrendeld() = 0;
    virtual QLineEdit* getLineInput() = 0;
};

#endif // SLOT_H
