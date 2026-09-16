/*
class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)
};
*/

#include <iostream>
using namespace std;

class Myclass{ //The Class
    public:   //Access specifier
    int id;    //attribute(int variable)
    string name;//attribute(string variable)
    double weight;     //attribute(double variable)
};
int main(){
    Myclass myObj; //create a object of Myclass

    //Access attribute and set value
    myObj.id = 12;
    myObj.name = "Sourabha Jena";
    myObj.weight = 62.3;
     
    cout <<"ID: " <<myObj.id <<endl;
    cout <<"Name: " <<myObj.name <<endl;
    cout <<"Weight: " <<myObj.weight <<"Kg" <<endl;


    return 0;
}
