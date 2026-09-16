#include <iostream>
using namespace std;

class Car{
    public:
    void myCar(int max_speed);
};

void Car::myCar(int max_speed){
    cout <<"My car max-Speed: " <<max_speed <<endl;
}

int main(){
    Car c1;
    c1.myCar(200);
    return 0;
}