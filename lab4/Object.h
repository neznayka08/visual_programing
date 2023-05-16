#ifndef OBJECT
#define OBJECT
#include "Coordinates.h"
#include <vector>
class Object {
private:
    Coordinates currentCoord;  
    std::vector<Coordinates> path;  
public:
    Object(Coordinates coordinates) {  
        this->currentCoord = coordinates;
        path.push_back(coordinates);   
    }

    void moveTo(const Coordinates& coordinates);

    double getPathLength() const;
    double getDistanceTo(const Coordinates& coordinates) const;
};
#endif