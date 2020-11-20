#ifndef OMNIDIRECTIONALDRIVEROBOT_H
#define OMNIDIRECTIONALDRIVEROBOT_H

#include <iostream>
#include <math.h>
#include "MobileRobot.h"
#include "Wheel.h"

using namespace std;

class OmnidirectionalDriveRobot : MobileRobot{
        Wheel frontLeftWheel;
        Wheel frontRightWheel;
        Wheel backLeftWheel;
        Wheel backRightWheel;
        double lrDist;
        double fbDist;
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

OmnidirectionalDriveRobot::OmnidirectionalDriveRobot(double r, double lrDist, double fbDist ){
    this->wheelRadius = r;
    this->lrDist = lrDist;
    this->fbDist = fbDist;
}

double OmnidirectionalDriveRobot::getVel(){
    
 

}

double OmnidirectionalDriveRobot::getRotVel(){
    
 

}

double OmnidirectionalDriveRobot::getVx(){
    
 

}

double OmnidirectionalDriveRobot::getVy(){
    
 

}




void OmnidirectionalDriveRobot::print(){
    
}












#endif