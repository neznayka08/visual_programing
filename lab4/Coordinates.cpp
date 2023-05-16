#include "Coordinates.h"

    void Coordinates::setCoordinates(int x, int y) {   
        this->x = x;
        this->y = y;
    }

    int Coordinates::getX() const {    
        return x;
    }

    int Coordinates::getY() const {    
        return y;
    }