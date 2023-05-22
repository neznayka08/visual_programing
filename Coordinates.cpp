#include "Coordinates.h"
#include <cmath>

Coordinates::Coordinates(int x, int y) {
    this->x = x;
    this->y = y;
    this->latitude = 0.0;
    this->longitude = 0.0;
}

int Coordinates::getX() const {
    return x;
}

int Coordinates::getY() const {
    return y;
}

void Coordinates::setX(int x) {
    this->x = x;
}

void Coordinates::setY(int y) {
    this->y = y;
}

double Coordinates::getLatitude() const {
    return latitude;
}

double Coordinates::getLongitude() const {
    return longitude;
}

double Coordinates::distanceTo(const Coordinates& other) const {
    int dx = x - other.getX();
    int dy = y - other.getY();
    return sqrt(dx * dx + dy * dy);
}
