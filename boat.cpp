

#include "boat.h"

void boat::sail() {
    cout<<"Плывем на лодке!";
}

long boat::getLength() {
    return len;
}

void boat::pinfo() {
    cout<< name << len << ismot<< endl;
}
bool boat::need() {
    return ismot;
}
