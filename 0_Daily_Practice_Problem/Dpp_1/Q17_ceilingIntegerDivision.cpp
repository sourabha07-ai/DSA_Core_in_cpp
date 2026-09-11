#include <iostream>
using namespace std;

// Take two integers a and b (b ̸= 0) as input. Print the result of ceiling integer division
// of a by b.
// Ceiling division always rounds up — e.g., ⌈7/2⌉ = 4, whereas normal integer division gives 3.
// Hint - Formula for positive integers: (a + b −1) /b.
// Sample — Input: 7 2 ⇒ Output: 4

int main(){
   int m,n;
   cout <<"Enter m: ";
   cin >> m;
   cout <<"Enter n: ";
   cin >>n;

   int division = (m + n -1 ) / n;
   cout << division << endl;

    return 0;
}