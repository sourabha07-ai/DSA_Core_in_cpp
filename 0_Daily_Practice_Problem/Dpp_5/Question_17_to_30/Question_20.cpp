#include<iostream>
using namespace std;
/*
Write a program demonstrating Function Overloading. Create two functions named
calculateArea. One should take a single double parameter (radius) and return the area of a
circle. The other should take two double parameters (length, width) and return the area of a
rectangle.
Sample — Input: Circle radius 3 ⇒ Output: 28.26
Input: Rectangle 4 5 ⇒ Output: 20
*/
double calculateArea(double radius){
    double pi = 3.14,area;
     area = pi * radius * radius;

     return area;
}

double calculateArea(double length,double width){
    double area = length * width;
    return area;
}

int main(){
    double radius,length,width;
    cout <<"Enter Circle Radius: ";
    cin >> radius;
    cout <<"Enter Rectangle length and width: ";
    cin >> length >>width ;

    cout <<"Area of Circle: " << calculateArea(radius) <<endl;
    cout <<"Area of Rectangle: " <<calculateArea(length,width)<<endl;
   



    return 0;
}