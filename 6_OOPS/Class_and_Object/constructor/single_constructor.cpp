#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


class Car{
    public:
      string name;
      int number;
      string model;
      int year;    
      Car(){

      }
      Car(string n,int num,string m,int ye){
         name = n;
         number = num;
         model = m;
         year = ye;
      }
};

void print(Car c){
   cout <<y <<"Car Details:-" <<reset <<endl;
   cout <<"Car Name: " <<c.name <<endl;
   cout <<"Car Number: " <<c.number <<endl;
   cout <<"Car Model: " <<c.model <<endl;
   cout <<"Car year: " <<c.year <<endl;
}

int main(){
//    Car c1;
//    c1.name = "Volvo";
//    c1.number = 203;
//    c1.model = "X9";
//    c1.year = 2023;

//    print(c1);
//  cout <<"--------------------------------------" <<endl;
//    Car c2;
//    c2.name = "Bmw";
//    c2.number = 123;
//    c2.model = "Suv03";
//    c2.year = 2021;

//    print(c2);
//    cout <<"----------------------------------------" <<endl;

//    Car c3("Toyota",20,"2soe3",2020);
//    print(c3);
      
      // Car c4;
      // cout<<"Enter car Name: " ;
      // cin >>c4.name;
       
      // cin.ignore();

      // cout <<"Enter Car-Number: ";
      // cin >>c4.number;

      // cin.ignore();

      // cout <<"Enter Car-model: ";
      // cin >>c4.model;

      // cin.ignore();

      //  cout <<"Enter launch-year: ";
      //  cin >>c4.year;

      //  print(c4);

   return 0;
  
}