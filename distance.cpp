#include "distance.h"

distance::distance() {}

float distance::calcDistance(int valX, int valY)
{
    int valDist;
    valX = valX * 10;
    valY = valY * 10;

    valDist = pow(valX,2) + pow(valY,2);
    dist = sqrt(valDist);
    dist = dist / 100 ;
    return dist;
}

double distance::calcAngle(int valX, int valY)
{
    double angle = atan2(valY, valX) * 180.0 / M_PI;

    if (angle < 0)
        angle += 360.0;

    return angle;
}
