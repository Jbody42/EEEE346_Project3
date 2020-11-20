#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;



class Robot{
    protected:
        string model;
    public:
    Robot(string in_model);

    string getModel();

    void setModel(string in_model);

    virtual void print() = 0;

};
#endif