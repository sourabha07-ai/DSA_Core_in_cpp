#include <iostream>
using namespace std; 
//   Take an integer n as input. Print the minimum non-negative integer that must be added
//  to n to make it exactly divisible by 7. Use the modulus operator.
// Sample — Input: 20 ⇒ Output: 1 (since 20+1 = 21 = 7×3)

int main(){
    int num;
    cout <<"Input n: ";
    cin >>num;

    int reminder = num % 7;

    int toAdd = ( 7 - reminder) % 7;
    cout << toAdd <<endl;

    return 0;
}