
#ifndef MYAIRCARPET_H
#define MYAIRCARPET_H
#include "AirVehicle.h"
class MyAirCarpet : public AirVehicle
{
public:

    MyAirCarpet();

    ~MyAirCarpet() override = default;

    double RoadСalculation(double) override;

};
#endif
