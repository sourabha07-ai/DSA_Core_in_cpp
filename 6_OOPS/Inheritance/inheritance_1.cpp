#include <iostream>
#include <string>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


//parent
class Vehicle {
    public:
    string name = "BMW";
    int year  = 2023;
    string honk(){
        return "ghu ghu";
    }
};

//Child 
class Car : public Vehicle{
    public:
    string brand = "Y40";
};

void print(Car c){
    cout <<"Car Name: " <<y  <<c.name <<reset <<endl;
    cout <<"Car brand: " <<y  <<c.brand<<reset  <<endl;
    cout <<"Car model: " <<y <<c.honk()<<reset  <<endl;
    cout <<"Car Year: " <<y  <<c.year <<reset <<endl;
};

int main(){
  Car c1;
  print(c1);

    return 0;
}