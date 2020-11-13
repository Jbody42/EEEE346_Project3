#include <iostream>
#include "MobileRobot.h"
#include "Wheel.h"

using namespace std;

class OmnidirectionalDriveRobot : MobileRobot{
        Wheel frontLeftWheel;
        Wheel frontRightWheel;
        Wheel backLeftWheel;
        Wheel backRightWheel;
        double lrDist;
        double fbDistl;
        double wheelRadius;
    public:
        OmnidirectionalDriveRobot(double r, double lrDist, double fbDist );
        double getVel();
        double getRotVel();
        double getVx();
        double getVy();
        void print();
        void setFrontRightWheelVelocity(int velocity);
        void setFrontLeftWheelVelocity(int velocity);
        void setBackRightWheelVelocity(int velocity);
        void setBackLeftWheelVelocity(int velocity);
};