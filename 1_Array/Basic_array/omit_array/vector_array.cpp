#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
   vector<string> cars = {"Volvo","TaTa","BMW"};

    //add new items
    cars.push_back("Oddi");
     
     for(string car : cars){
        cout << car <<endl;
     }

    return 0;
}