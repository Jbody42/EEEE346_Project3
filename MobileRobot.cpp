  
#include <iostream>
#include <stdio.h>
#include "MobileRobot.h"

using namespace std;


MobileRobot::MobileRobot(string in_model): Robot(in_model){
    this->model = in_model;
}


void MobileRobot::print(){
    cout << "--------------------------------------" << endl;
    cout << "----------------Model-----------------" << endl;
    cout << "--------------------------------------" << endl;
    cout << "\t" << model << endl;
    cout << "--------------------------------------" << endl;

}

