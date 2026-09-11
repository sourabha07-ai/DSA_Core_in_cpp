#include <iostream>
using namespace std;

// Compute the Kinetic Energy of a moving object. Take the Mass m (in kg, double) and
// Velocity v (in m/s, double) as input from the user. Be careful about integer vs. double division
// when applying the fraction coefficient.
// KE = 1/2 ×m ×v2 //1/2 means 0.5
// Sample — Input: m = 10, v = 4 ⇒ Output: 80

int main(){
    double mass ,velocity;
    cout <<"Enter Mass: ";
    cin >> mass;

    cout <<"Enter Velocity: ";
    cin >> velocity;

   double kineticEnergy =  0.5 * mass * velocity * velocity; 
   cout <<"Kinetic Energy is : " <<kineticEnergy <<endl;

    return 0;
}