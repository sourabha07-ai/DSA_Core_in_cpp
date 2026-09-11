// A circle of radius r is inside a square of side a (the circle always sits completely inside
// the square without touching its edges). Find the area of the shaded region — the part inside
// the square but outside the circle. Use π = 3.14.

#include <iostream>
using namespace std;

int main(){

    double side;
    cout <<"Side of Square: ";
    cin >> side;

    double radius;
    cout <<"Circle of Radius: ";
    cin >>radius;

    double pi = 3.14;

    double square_area = side * side;
    cout <<"Area of Square: " <<square_area <<endl;

    double circle_area = pi * radius * radius;
    cout <<"Area of inner Circle: " <<circle_area <<endl;
    
    double shaded_region = square_area - circle_area;
    cout <<"Shaded Region: " <<shaded_region <<endl;

    return 0;
}