#include <iostream>
#include "OmnidirectionalDriveRobot.h"
#include "Wheel.h"

using namespace std;



OmnidirectionalDriveRobot::OmnidirectionalDriveRobot(double r, double lrDist, double fbDist ) : MobileRobot(model), frontLeftWheel(r, .5*fbDist, .5*lrDist), frontRightWheel(r, .5*fbDist, -.5*lrDist), backLeftWheel(r, -.5*fbDist, .5*lrDist), backRightWheel(r, -.5*fbDist, -.5*lrDist){

    this->wheelRadius = r;
    this->lrDist = lrDist;
    this->fbDist = fbDist;
}

double OmnidirectionalDriveRobot::getVel(){
    double vel;
    double phi;
    double pi = 3.14159;
    
    vel = sqrt(pow(getVx(), 2)+pow(getVy(), 2));
    phi =  atan2(getVx(), -getVy());

    if(((phi>pi)&&(phi<(2*pi)))||((phi<0)&&(phi>-pi))){
        vel = -vel;
    }
    
    return vel;

}

double OmnidirectionalDriveRobot::getRotVel(){
    double rotVel; 
    double pi = 3.14159;

    rotVel = ((pi*wheelRadius)/(lrDist*fbDist))*(-frontLeftWheel.getVelocity()+frontRightWheel.getVelocity()-backLeftWheel.getVelocity()+frontRightWheel.getVelocity());
    
    return rotVel;
 

}

double OmnidirectionalDriveRobot::getVx(){
    double vx;
    double pi = 3.14159;
    
    vx = ((pi*wheelRadius)/2)*(frontLeftWheel.getVelocity()+frontRightWheel.getVelocity()+backLeftWheel.getVelocity()+frontRightWheel.getVelocity());
 
    return vx;

}

double OmnidirectionalDriveRobot::getVy(){
    double vy;
    double pi = 3.14159;
    
    vy = ((pi*wheelRadius)/2)*(-frontLeftWheel.getVelocity()+frontRightWheel.getVelocity()+backLeftWheel.getVelocity()-frontRightWheel.getVelocity());
 
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

    void OmnidirectionalDriveRobot::setFrontLeftWheelVelocity(double velocity){
         
         frontLeftWheel.setVelocity(velocity);   
    }
        

    void OmnidirectionalDriveRobot::setFrontRightWheelVelocity(double velocity){
        frontRightWheel.setVelocity(velocity);   
    }


    void OmnidirectionalDriveRobot::setBackLeftWheelVelocity(double velocity){
        backLeftWheel.setVelocity(velocity);   
    }


    void OmnidirectionalDriveRobot::setBackRightWheelVelocity(double velocity){
        backRightWheel.setVelocity(velocity);   
    }