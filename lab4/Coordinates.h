#ifndef COORDINATES
#define COORDINATES
#include <iostream>
#include <vector>
#include <cmath>
class Coordinates {
private:
    int x; 
    int y; 
public:
    Coordinates(int x = 0, int y = 0) {   
        this->x = x;
        this->y = y;
    }

    void setCoordinates(int x, int y);

    int getX() const;

    int getY() const;
};
#endif
