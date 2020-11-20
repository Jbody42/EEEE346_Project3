#include <iostream>
#include "OmnidirectionalDriveRobot.h"
#include "Wheel.h"

using namespace std;



OmnidirectionalDriveRobot::OmnidirectionalDriveRobot(double r, double lrDist, double fbDist ) : MobileRobot(model){
    this->wheelRadius = r;
    this->lrDist = lrDist;
    this->fbDist = fbDist;
}

double OmnidirectionalDriveRobot::getVel(){
    double vel;
    double phi;
    
    vel = sqrt(pow(getVx(), 2)+pow(getVy(), 2));
    phi =  atan2(getVx(), -getVy());

    if(((phi>M_PI)&&(phi<(2*M_PI)))||((phi<0)&&(phi>-M_PI))){
        vel = -vel;
    }
    
    return vel;

}

double OmnidirectionalDriveRobot::getRotVel(){
    double rotVel; 

    rotVel = ((M_PI*wheelRadius)/(lrDist*fbDist))*(-frontLeftWheel.getVelocity()+frontRightWheel.getVelocity()-backLeftWheel.getVelocity()+frontRightWheel.getVelocity());
    
    return rotVel;
 

}

double OmnidirectionalDriveRobot::getVx(){
    double vx;
    
    vx = ((M_PI*wheelRadius)/2)*(frontLeftWheel.getVelocity()+frontRightWheel.getVelocity()+backLeftWheel.getVelocity()+frontRightWheel.getVelocity());
 
    return vx;

}

double OmnidirectionalDriveRobot::getVy(){
    double vy;
    
    vy = ((M_PI*wheelRadius)/2)*(-frontLeftWheel.getVelocity()+frontRightWheel.getVelocity()+backLeftWheel.getVelocity()-frontRightWheel.getVelocity());
 
    return vy;
 
}




void OmnidirectionalDriveRobot::print(){
      
    cout << endl;
    cout << "--------------------------------------" << endl;
    cout << "----------------Wheels----------------" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Front Left Wheel: " << endl;
    frontLeftWheel.print();
    cout << "--------------------------------------" << endl;

    cout << "Front Right Wheel: " << endl;
    frontRightWheel.print();
    cout << "--------------------------------------" << endl;

    cout << "Back Left Wheel: " << endl;
    backLeftWheel.print();
    cout << "--------------------------------------" << endl;

    cout << "Back Right Wheel: " << endl;
    backRightWheel.print();

    cout << endl;

    cout << "--------------------------------------" << endl;
    cout << "--------------Robot State-------------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "Linear Velocity:\t"		<< getVel()		<<  " m/s" << endl;
    cout << "Rotational Velocity:\t" << getRotVel()	<< " rad/s" << endl;
    cout << "Vx:\t\t\t" << getVx() << " m/s" << endl;
    cout << "Vy:\t\t\t" << getVy() << " m/s" << endl;
    cout << "--------------------------------------" << endl;

}