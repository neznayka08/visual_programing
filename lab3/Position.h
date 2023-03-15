#ifndef POSITION
#define POSITION
#include <iostream>
#include <time.h>
#include <math.h>
#include <string>
#include <vector>
using namespace std;

class Position{
    public:
	Position(int x, int y){
  	this->x_ = x;
    this->y_ = y;
  }
	int x_;
    int y_;
};

class Object{
private: 
    vector <Position> _path; 
    void Path(int x, int y);
    void Path(Position place);
public:
    Object(int x, int y);
    Object(Position place);
    void move(Position place);
    const vector<Position>& getPath(){
        return  _path;
    }
    void Walk(int n);

};

void showPath(Object ob);

#endif