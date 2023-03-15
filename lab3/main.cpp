#include "Position.h"

int main(){
    int x = 15; 
    int y = 9;
    Position startcoor(x, y);
    Position place2(145, 65);
    Object ob1(startcoor);
    ob1.move(place2);
    ob1.Walk(10);
    showPath(ob1);
    return 0;
} 
