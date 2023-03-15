#include "Position.h"

void Object::Path(int x, int y){
        Position place(x, y);					
        _path.push_back(place);
    }

void Object::Path(Position place){
        _path.push_back(place);
    }

Object::Object(int x, int y){
    		Path(x, y);
    }

Object::Object(Position place){
    		Path(place);
    }

void Object::move(Position place){ 
        Path(place);
    }

void Object::Walk(int n){
        int counter = 0;
        srand(time(NULL));
        while(counter < n){
            int x = rand()%100;
            int y = rand()%100;
            Path(x, y);
            counter ++;
        }
    }

void showPath(Object ob){
        auto &path = ob.getPath();
        int n = path.size();
        for(auto & coor : path){
        	std::cout << "x "<< coor.x_ <<", y "<< coor.y_ <<'\n';
        }
    }