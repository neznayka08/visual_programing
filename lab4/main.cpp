#include "Coordinates.h"
#include "Object.h"
using namespace std;
int main() {
    int X; 
    int Y;
    int targetX;
    int targetY;
    cout << "Веедите координаты" << endl;
    cin >> X;
    cout << endl;
    cin >> Y;
    cout << "Введите координаты цели" << endl;
    cin >> targetX;
    cin >> targetY;
    Coordinates startCoords(0, 0);
    Object myObject(startCoords);
    Coordinates newCoords(X, Y);
    myObject.moveTo(newCoords);
    cout << "Длина пройденного пути: " << myObject.getPathLength() << endl;
    Coordinates targetCoords(targetX, targetY);
    cout << "Расстояние до целевых координат: " << myObject.getDistanceTo(targetCoords) << endl;
    return 0;
}
