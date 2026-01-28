//
// Created by ivan on 1/28/2026.
//

#include "Bicycle.h"
void Bicycle::ride() {
    cout<<"Плывем на лодке!";
}

string Bicycle::getType() {
    return type;
}

void Bicycle::pinfo() {
    cout<< type << hasbasket<< endl;
}
bool Bicycle::canCarryGroceries() {
    return hasbasket;
}