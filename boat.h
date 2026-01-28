
#ifndef UNTITLED2_BOAT_H
#define UNTITLED2_BOAT_H
#include "Car.h"

class boat {
    private:
     string name;
     int len;
     bool ismot;
    public:
    boat(int l, string n, bool i) : name(n), len(l), ismot(i){}
    void sail();
    long getLength();
    void pinfo();
    bool need();
};


#endif //UNTITLED2_BOAT_H