#include <iostream>
#include <string>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


class Car {
    public:
      string car_name;
      string car_model;
      string car_model_no;
      int car_lunch_date;
};

void print(Car c){
    cout <<g <<"Car_Name: "   <<reset <<y <<c.car_name <<reset <<endl;
    cout <<g <<"Car_Model: "  <<reset <<y <<c.car_model <<reset <<endl;
    cout <<g <<"Car_Model_No: " <<reset <<y <<c.car_model_no <<reset<<endl;
    cout <<g <<"Car_Lunch_date: " <<reset  <<y <<c.car_lunch_date <<reset <<endl;
}

int main(){
  Car c1;
 c1.car_name = "Volvo";
   c1.car_model = "X7";
    c1.car_model_no = "348jd6";
      c1.car_lunch_date = 2023; 

      Car c2;
 c2.car_name = "Maruti";
   c2.car_model = "C26";
    c2.car_model_no = "23d4k";
      c2.car_lunch_date = 2026; 

      print(c1);
      cout <<y <<"-----------------" <<reset <<endl;
      print(c2);

    

    return 0;
}