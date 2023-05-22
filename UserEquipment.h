#ifndef USEREQUIPMENT_H
#define USEREQUIPMENT_H
#include <cstdlib> 
#include "Object.h"

class UserEquipment : public Object {
public:
    UserEquipment(int id, int x, int y);
    void moveRandom();
    void convertToGeographicCoordinates();
};

#endif