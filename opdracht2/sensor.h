#ifndef SENSOR_H
#define SENSOR_H

#include <utility>

using namespace std;


class QPaintDevice;

class Sensor
{
public:
    Sensor(int,int);
    virtual ~Sensor();
    virtual void teken(QPaintDevice*);
    virtual void activeer();
    virtual void deactiveer();
    virtual bool isGeactiveerd() const;
    virtual std::pair<int,int> coordinaten() const;

private:
    int x,y;
    bool geactiveerd;
};

#endif // SENSOR_H
