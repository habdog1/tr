#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H
#include <iostream>
#include <string>
using namespace std;

class Car {
private:
    int maxspeed;
    string brand;
    string fueltype;
public:
    Car(int s, string b, string f) : maxspeed(s), brand(b), fueltype(f){}
    void startengine();
    int getmaxspeed();
    void info();
    bool iselectro();



};