#ifndef MYLANDСAMEL_H
#define MYLANDСAMEL_H
#include "LandVehicle.h"
class MyLandCamel : public LandVehicle
{
public:

     MyLandCamel();

    ~MyLandCamel() override = default;

    double RoadСalculation(double) override;

};
#endif
