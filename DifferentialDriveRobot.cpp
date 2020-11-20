#include "DifferentialDriveRobot.h"
#include <iostream>
#include <stdio.h>
#include <math.h>
#define _USE_MATH_DEFINES


using namespace std;

DifferentialDriveRobot::DifferentialDriveRobot(double r, double d): MobileRobot(model){
    this-> wheelRadius = r;
    this-> wheelDistance = d;
}


double DifferentialDriveRobot::getVel(){
    double linVel;

    linVel = M_PI * wheelRadius * (leftWheel.getVelocity() + rightWheel.getVelocity());

    return linVel;
}

double DifferentialDriveRobot::getRotVel(){
    double rotVel;

    rotVel = ((2*M_PI*wheelRadius)/wheelDistance) * (leftWheel.getVelocity() - rightWheel.getVelocity());
    
    return rotVel;
}

double DifferentialDriveRobot::getVx(){
    double vx;

    vx = getVel() * cos(getRotVel());

    return vx;

}

double DifferentialDriveRobot::getVy(){
    double vy;

    vy = getVel() * sin(getRotVel());

    return vy;

}

void DifferentialDriveRobot::print(){

    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "----------------Wheels----------------" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Left Wheel: " << endl;
    leftWheel.print();

    cout << "--------------------------------------" << endl;
    cout << "Right Wheel: " << endl;
    rightWheel.print();

    cout << endl;

    cout << "--------------------------------------" << endl;
    cout << "--------------Robot State-------------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Linear Velocity:\t"<< getVel() <<  " m/s" << endl;
    cout << "Rotational Velocity:\t" << getRotVel()	<< " rad/s" << endl;
    cout << "Vx:\t\t\t" << getVx() << " m/s" << endl;
    cout << "Vy:\t\t\t" << getVy() << " m/s" << endl;
    cout << "--------------------------------------" << endl;

}

void DifferentialDriveRobot::setLeftWheelVelocity(double velocity){
    leftWheel.setVelocity(velocity);
}

void DifferentialDriveRobot::setRightWheelVelocity(double velocity){
    rightWheel.setVelocity(velocity);
}