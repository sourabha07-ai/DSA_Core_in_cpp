#include <iostream>
using namespace std; 

void display(int a){
    cout <<"Int: " <<a <<endl;
}

void display(double a){
    cout <<"Double: " <<a <<endl;
}

int main(){
    display(5);
    display(4.5);
  
    return 0;
}