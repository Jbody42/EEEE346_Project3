#ifndef DifferentialDriveRobot_H
#define DifferentialDriveRobot_H
#define _USE_MATH_DEFINES
#include <math.h>
#include <iostream>
#include <stdio.h>
#include "MobileRobot.h"
#include "Wheel.h"

using namespace std;

class DifferentialDriveRobot : public MobileRobot{
    private:
        Wheel leftWheel;
        Wheel rightWheel;
        double wheelDistance;
        double wheelRadius;
    public:
        DifferentialDriveRobot(double r, double d);
        double getVel();
        double getRotVel();
        double getVx();
        double getVy();
        void print();
        void setLeftWheelVelocity(double velocity);
        void setRightWheelVelocity(double velocity);
};

#endif