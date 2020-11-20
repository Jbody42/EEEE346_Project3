#include <iostream>
#include "Wheel.h"
using namespace std;


Wheel::Wheel(double in_radius, double in_x, double in_y){
    this->radius = in_radius;
    this->posX = in_x;
    this->posY = in_y;
}


double Wheel::getRadius(){
    return this->radius;
}

double Wheel::getX(){
    return this->posX;
}

double Wheel::getY(){
    return this->posY;
}

void Wheel::setX(double in_x){
    this->posX = in_x;
}

void Wheel::setY(double in_y){
    this->posY = in_y;
}

double Wheel::getVelocity(){
    return this->velocity;
}

void Wheel::setVelocity(double in_velocity){
    this->velocity = in_velocity;
}

void Wheel::print(){
    cout << "Position: \t(" << posX << " m, " << posY << " m) \n";
    cout << "Velocity:\t" << velocity << " rev/s" << endl;
}