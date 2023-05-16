#include "Object.h"
void Object::moveTo(const Coordinates& coordinates) { 
    path.push_back(coordinates);   
    currentCoord = coordinates;    
}

double Object::getPathLength() const { 
    double length = 0;
    for (int i = 1; i < path.size(); i++) { 
        int x1 = path[i-1].getX();
        int y1 = path[i-1].getY();
        int x2 = path[i].getX();
        int y2 = path[i].getY();
        length += sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
    }
    return length;
}

double Object::getDistanceTo(const Coordinates& coordinates) const { 
    int x1 = currentCoord.getX();
    int y1 = currentCoord.getY();
    int x2 = coordinates.getX();
    int y2 = coordinates.getY();
    return sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));
}