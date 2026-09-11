#include <iostream>
using namespace std;
// Take an amount in Rupees (double) and convert it to Dollars, given that
 // 1 Dollar = 100 Rupees.
// Sample — Input: 250 ⇒ Output: 2.5

int main (){
    double rupees;
    cout <<"Enter Rupees: ";
    cin >> rupees;

    double dollar = rupees / 100.0;
    cout << dollar <<"$" <<endl;

    return 0;
}