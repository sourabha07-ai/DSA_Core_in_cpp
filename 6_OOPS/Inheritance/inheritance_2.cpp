#include <iostream>
#include <string>
using namespace std;
 


//parent
class Vehicle {
    public:
    string name;
    int year;
    
    Vehicle(string name = "BMW",int year = 2014){
        this->name = name;
        this->year = year;
    }
    string honk(){
        return "ghu ghu";
    }
};

//Child 
 class Car : public Vehicle{
    public:
    string brand;

    Car(string name = "BMW" ,string brand = "X3" ,int year = 2014):Vehicle(name,year){
        this->brand = brand;
    }
 };

void print(Car c){
    cout <<"Car Name: "  <<c.name   <<endl;
    cout <<"Car brand: "  <<c.brand  <<endl;
    cout <<"Car model: " <<c.honk() <<endl;
    cout <<"Car Year: "  <<c.year <<endl;
};

int main(){
  Car c1;
  print(c1);

  cout <<endl;
  
  Car c2("Sourabha","Puja",2003);
  print (c2);
  cout <<endl;

  Car c3("Volvo","X9",2120);
  print(c3);

    return 0;
}