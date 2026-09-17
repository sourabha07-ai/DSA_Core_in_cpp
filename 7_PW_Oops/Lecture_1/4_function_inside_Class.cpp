#include<iostream>
using namespace std;
class Car{
   public:
      string name;
      int power;
      float mailage;
      Car(string n, int p,float m)  {
        name = n;
        power = p;
        mailage = m;
      }  
      Car(){ //default Constructor

      }
      void print(){
        cout <<"Car_Name: "<<name<<endl;
        cout <<"Car_power: "<<power<<"cc"<<endl;
        cout <<"Car_mailage: "<<mailage<<"km/liter"<<endl;
      } 
};

int main(){
        Car c1("BMW",400,9.8);
        c1.print();

}