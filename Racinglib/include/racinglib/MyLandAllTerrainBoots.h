#ifndef MYLANDALLTERRAINBOOTS_H
#define MYLANDALLTERRAINBOOTS_H
#include "LandVehicle.h"

class MyLandAllTerrainBoots : public LandVehicle
{
public:

    MyLandAllTerrainBoots();

    ~MyLandAllTerrainBoots() override = default;

    double RoadСalculation(double) override;

};
#endif
