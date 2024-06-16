#include "MyLandСamel.h"

MyLandCamel::MyLandCamel()
{
    m_name = "Camel";

    m_speed = 10;

    TimeToRest = 30;

}

double MyLandCamel::RoadСalculation(double Distance)
{
   double DistanceInTime = Distance/m_speed;

   int CountOfChill = static_cast<int>(DistanceInTime)/TimeToRest;

    double ResultTime = DistanceInTime;

    for (int i = 0; i < CountOfChill; i++)
    {
        if(i == 0) {
            ResultTime +=5;
        }
        else
        {
            ResultTime += 8;
        }
    }
    return ResultTime;
}

