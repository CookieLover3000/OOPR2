#include "draaideur.h"
#include <QPainter>

Draaideur::Draaideur(bool a, int b, int c, unsigned int d, bool e) : Deur(a,b,c,d),liggend(e)
{}

Draaideur::Draaideur(bool a, int b, int c, unsigned int d, bool e, Slot* s) : Deur(a,b,c,d,s),liggend(e)
{}

void Draaideur::teken(QPaintDevice *tp)
{
QPainter p(tp);

QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
p.setPen(pen);
if(liggend)
{
    if(isDeurOpen()) // controleert of de deur open is
        p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first, coordinaten().second-deurLengte());
    else
        p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first-deurLengte(), coordinaten().second);
    }
else
{
    if(isDeurOpen()) // controleert of de deur open is
        p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first+deurLengte(), coordinaten().second);
    else
        p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first, coordinaten().second-deurLengte());
    }
}
