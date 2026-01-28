//
// Created by ivan on 1/28/2026.
//

#ifndef UNTITLED2_BICYCLE_H
#define UNTITLED2_BICYCLE_H
#include "Car.h"


class Bicycle {
private:
    string type;
    bool hasbasket;
public:
    Bicycle(string type, bool hb) : type(type), hasbasket(hb){}
    void ride();
    string getType();
    void pinfo();
    bool canCarryGroceries();
};



#endif //UNTITLED2_BICYCLE_H