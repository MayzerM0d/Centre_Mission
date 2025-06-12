#ifndef DISTANCE_H
#define DISTANCE_H

#include <cmath>

class distance
{
    float dist = 0;
    float angle = 0;
public:
    distance();
    float calcDistance(int valX, int valY);
    double calcAngle(int valX, int valY);
};

#endif // DISTANCE_H
