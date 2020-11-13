#ifndef MOBILEROBOT_H
#define MOBILEROBOT_H
#include <iostream>
#include <string>
#include <stdio.h>
#include "Robot.h"

using namespace std;


class MobileRobot : public Robot{

    public:
        MobileRobot(string);
        virtual double getVel() = 0;
        virtual double getRotVel() = 0;
        virtual double getVx() = 0;
        virtual double getVy() = 0;
        virtual void print();

};
#endif  