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
    
     void Path(int x, int y){
        Position place(x, y);					
        _path.push_back(place);
    }
		void Path(Position place){
        _path.push_back(place);
    }
public:
    Object(int x, int y){
    		Path(x, y);
    }
    Object(Position place){
    		Path(place);
    }
    
    void move(Position place){ 
        Path(place);
    }


     const vector<Position>& getPath(){
        return  _path;
    }
    
    void Walk(int n){
        int counter = 0;
        srand(time(NULL));
        while(counter < n){
            int x = rand()%100;
            int y = rand()%100;
            Path(x, y);
            counter ++;
        }
    }

    
};
void showPath(Object ob){
        auto &path = ob.getPath();
        int n = path.size();
        for(auto & coor : path){
        	std::cout << "x "<< coor.x_ <<", y "<< coor.y_ <<'\n';
        }
    }


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