#ifndef MYAIREAGLE_H
#define MYAIREAGLE_H
#include "AirVehicle.h"

class MyAirEagle : public AirVehicle
{
public:

    MyAirEagle();

    ~MyAirEagle() override = default;

    double RoadСalculation(double) override;

};
#endif
