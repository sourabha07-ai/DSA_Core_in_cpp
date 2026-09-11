#include<iostream>
#include <cmath>
using namespace std;
/*
Write a program to calculate the hypotenuse of a right-angled triangle given its base
and perpendicular. Write a function that accepts these two values and uses the inbuilt sqrt()
library function to return the hypotenuse.
Sample — Input: 3 4 ⇒ Output: 5
*/
double hypotenuse(double b, double p){
    double h = sqrt((b * b) + (p * p));

    return h;
}
int main(){
    double b,p;
    cout <<"Enter Base: ";
    cin >>b;
    cout <<"Enter Perpendicular: ";
    cin >> p;

    double h = hypotenuse(b,p);
    cout <<"Hypotenuse: "<<h <<endl;


}