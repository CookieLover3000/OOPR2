#ifndef AFDRUKKER_H
#define AFDRUKKER_H

#include <string>

using namespace std;

class Afdrukker
{
public:
    virtual ~Afdrukker(){}
    virtual void toonText(string) = 0;
    virtual void clearMedium() = 0;
};

#endif // AFDRUKKER_H
