#include "hallsensor.h"

#include <QPaintDevice>
#include <QPainter>
#include <QPen>

HallSensor::HallSensor(int a, int b) : Sensor(a,b)
{

}

void HallSensor::teken(QPaintDevice* tp)
{
    QPainter p(tp);
    QColor kleur;
    p.setBrush(Qt::SolidPattern);
    if(isGeactiveerd())
        kleur=Qt::blue;
     else
         kleur=Qt::yellow;

     p.setBrush(kleur);
     QPen pen(kleur,2,Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin);
     p.setPen(pen);
     p.drawEllipse(coordinaten().first, coordinaten().second,20,20);
}
