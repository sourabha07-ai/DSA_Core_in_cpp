//*  Take an integer n as input. Print the value of 4n +9.
//* Sample — Input: 5 ⇒ Output: 29
#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number: ";
    cin >> num;

    int output = 4 * num + 9;
    cout <<"Output: " << output <<endl;
    
    return 0;
}