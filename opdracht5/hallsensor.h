#ifndef HALLSENSOR_H
#define HALLSENSOR_H

#include "sensor.h"

using namespace std;

class QPaintDevice;

class HallSensor : public Sensor
{
public:
    HallSensor(int, int);
    virtual void teken(QPaintDevice*);
};

#endif // HALLSENSOR_H
