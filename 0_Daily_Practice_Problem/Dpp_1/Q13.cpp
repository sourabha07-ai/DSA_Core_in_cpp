//  Write a program to calculate the Volume of a Sphere given radius r. Use π = 3.14.
// V = 4/3 πr3
// Sample — Input: 3 ⇒ Output: 113.04

#include <iostream>
using namespace std;

int main(){
    int radius;
    cout <<"Enter radius: ";
    cin >>radius;
    
    float pi = 3.14;
    double volume =( 4.0 / 3.0 ) * pi * radius * radius * radius;

    cout <<"Volume: " <<volume <<endl;

   


    return 0;
}