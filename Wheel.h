#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;



class Wheel{
    private:
        double radius;
        double posX;
        double posY;
        double velocity;
    public:
        Wheel(double in_radius, double in_x, double in_y);

        double getRadius();

        double getX();
        double getY();

        void setX(double);
        void setY(double);

        double getVelocity();
        void setVelocity(double in_velocity);
        void print();

};


#endif