#include "schuifdeur.h"
#include "sensor.h"
#include "slot.h"

#include <QPainter>

SchuifDeur::SchuifDeur(bool a,int b, int c, unsigned int d, Sensor *e) : Deur(a,b,c,d), sens(e)
{}

SchuifDeur::SchuifDeur(bool a,int b, int c, unsigned int d, Sensor *e, Slot *s) : Deur(a,b,c,d,s), sens(e)
{}

void SchuifDeur::teken(QPaintDevice *tp)
{
    QPainter p(tp);

    QPen pen(Qt::black,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
    p.setPen(pen);

    if(isDeurOpen()) // controleert of de deur open is
        p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first, coordinaten().second+deurLengte());
    else
        p.drawLine(coordinaten().first, coordinaten().second, coordinaten().first, coordinaten().second-deurLengte());
}

void SchuifDeur::sluit()
{
    if(!sens->isGeactiveerd())
        zetStatus(false);
    for(auto &i : returnSlot())
    {
        i->vergrendel();
    }
    sens->activeer();
}

void SchuifDeur::open()
{
    bool temp = true;
        for(auto &i : returnSlot())
        {
//            i->ontgrendel(i->getLineInput()->text().toStdString());
            if(i->isVergrendeld())
                temp = false;
        }
        if(temp)
            sens->deactiveer();
        zetStatus(temp);
}
