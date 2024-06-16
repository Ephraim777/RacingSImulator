#include "MyAirbroom.h"

MyAirBroom::MyAirBroom()
{
    m_name = "Broom";

    m_speed = 20;

}

double MyAirBroom::RoadСalculation(double Distance)
{
    double ResultTime = 0;

    DistanceReductionFactor = 0;

    for (int i = 1000; i < Distance; i+=1000)
    {
    DistanceReductionFactor += 1;
    }

    if (DistanceReductionFactor != 0)
    {
        DistanceReductionFactor /= 100;
        double TempLossDistance = Distance * DistanceReductionFactor;

        Distance = Distance - TempLossDistance;
    }

    ResultTime = Distance/m_speed;

    return ResultTime;
}
