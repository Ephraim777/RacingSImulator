#ifndef MYAIRBROOM_H
#define MYAIRBROOM_H
#include "AirVehicle.h"

class MyAirBroom : public AirVehicle
{
public:

    MyAirBroom();

    ~MyAirBroom() override = default;

    double RoadСalculation(double) override;

};
#endif
