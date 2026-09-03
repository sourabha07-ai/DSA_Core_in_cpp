#include <iostream>
#include <string>
using namespace std; 

int main(){
        string name = "Sourabha";
        cout <<"Name: " <<name <<endl;
        char front_name = name.front();
        cout <<"Front letter: " <<front_name <<endl;

        char back_name = name.back();
        cout <<"Back Letter: "<<back_name <<endl;
  
    return 0;
}