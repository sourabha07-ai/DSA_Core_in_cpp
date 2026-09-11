#include <iostream>
#include<string>
using namespace std;


int main(){
//    string fruits[] = {"apple","Banana","lichi","Mango"};
//    for(string fruit : fruits){
//     cout << fruit <<endl;
//    } 
    
   
   string cars[2];
    cars[0] = "Volvo";
    cars[1] = "BMW";

    for (string car : cars){
        cout << car <<endl;
    }

    return 0;
}