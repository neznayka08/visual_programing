#ifndef OBJECT_H
#define OBJECT_H

#include "Coordinates.h"

class Object {
protected:
    int id;
    Coordinates position;
    int path[1000][2];
    int path_length;
public:
    Object(int id, int x, int y);
    void moveRandom();
    void printPosition();
    void printPath();
};

#endif