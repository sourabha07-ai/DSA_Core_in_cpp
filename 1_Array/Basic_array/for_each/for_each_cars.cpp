#include <iostream>
using namespace std; 

int main(){
    string cars[5] = {"BMW", "Audi", "Mercedes", "Lexus", "Porsche"};
       for (string car : cars){
        cout << car <<endl;
       }
  
    return 0;
}