#include "Car.h"
#include "Bicycle.h"
#include "boat.h"


int main(){
    boat b(10,"idk", true);
    b.sail();
    b.getLength();
    b.need();
    b.pinfo();
    Car c(100,"mersedes","Gas");
    c.getmaxspeed();
    c.info();
    c.iselectro();
    c.startengine();
    Bicycle bc("горный", false);
    bc.ride();
    bc.canCarryGroceries();
    bc.getType();
    bc.pinfo();
}