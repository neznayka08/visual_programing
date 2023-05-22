#include "Object.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

Object::Object(int id, int x, int y) : position(x, y) {
    this->id = id;
    this->path_length = 0;
}

void Object::moveRandom() {
    int dx = rand() % 3 - 1;
    int dy = rand() % 3 - 1;
    position.setX(position.getX() + dx);
    position.setY(position.getY() + dy);

    path[path_length][0] = position.getX();
    path[path_length][1] = position.getY();
    path_length++;
}

void Object::printPosition() {
    std::cout << "Object " << id << " is at (" << position.getX() << ", " << position.getY() << ")" << std::endl;
}

void Object::printPath() {
    std::cout << "Object " << id << " path:" << std::endl;
    for (int i = 0; i < path_length; i++) {
        std::cout << "(" << path[i][0] << ", " << path[i][1] << ") ";
    }
}
