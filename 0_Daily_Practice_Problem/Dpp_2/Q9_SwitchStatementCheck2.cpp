#include <iostream>
using namespace std;


int main(){
   int val = 65;
   switch(val){
    case 'A' : cout <<"Character Match A" <<endl; break; //Compiler Error
    case 65 : cout << "Integer Match 65" <<endl; break; 
    default : cout << "No Match found" <<endl;
   }

    return 0;
}