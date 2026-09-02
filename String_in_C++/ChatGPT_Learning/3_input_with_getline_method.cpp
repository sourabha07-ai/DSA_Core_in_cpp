#include <iostream>
#include <vector>
#include<string>
using namespace std; 

//! getline() — Very Important ⭐

int main(){
        string name;
        cout <<"Enter your full name: ";
        getline(cin,name);

        cout <<"Hello!...," <<name <<endl;
  
    return 0;
}