#include "deur.h"

#include <QPainter>

Deur::Deur(bool a, int b, int c, unsigned int d) : status(a), x_coordinaat(b), y_coordinaat(c), lengte(d)
{}

Deur::Deur(bool a, int b, int c, unsigned int d, Slot* s) : status(a), x_coordinaat(b), y_coordinaat(c), lengte(d), slot(s)
{}

Deur::~Deur()
{}

void Deur::open()
{
    if(!slot->isVergrendeld())
        status = true;
}

void Deur::sluit()
{
    status = false;
    slot->vergrendel();
}

void Deur::teken(QPaintDevice *tp)
{
QPainter p(tp);
p.setBrush(Qt::SolidPattern);

 p.setBrush(Qt::black);
 QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
 p.setPen(pen);
 if(status) // controleert of de deur open is
     p.drawLine(x_coordinaat, y_coordinaat, x_coordinaat, y_coordinaat-lengte);
 else
     p.drawLine(x_coordinaat, y_coordinaat, x_coordinaat, y_coordinaat+lengte);
}

bool Deur::isDeurOpen() const
{
    return status;
}
unsigned int Deur::deurLengte() const
{
    return lengte;
}

pair<int,int> Deur::coordinaten() const
{
    pair<int,int> temp;
    temp.first=x_coordinaat;
    temp.second=y_coordinaat;
    return temp;
}

void Deur::zetStatus(bool a)
{
    status = a;
}

Slot* Deur::returnSlot()
{
    return slot;
}
