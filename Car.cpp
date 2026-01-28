#include "Car.h"
void Car::startengine() {
    cout<<"Двигатель Toyota запущен.";
}
int Car::getmaxspeed() {
    return maxspeed;
}
void Car::info() {
    cout<< maxspeed<< brand << fueltype;
}
bool Car::iselectro() {
    if (fueltype == "electro") {
        return true;
    }
    else {
        return false;
    }
}