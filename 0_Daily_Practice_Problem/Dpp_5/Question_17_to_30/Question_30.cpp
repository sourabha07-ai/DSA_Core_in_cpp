/**
Write a program containing nested functions. Create a function findPermutation(int
n, int r) to calculate nP r = n!
(n−r)!. This function must internally call another function
getFactorial(int x). Take n and r as inputs from the user.
Sample — Input: n = 5, r = 2 ⇒ Output: 20
**/
#include <iostream>
using namespace std;

int getFactorial(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

// Function to calculate nPr
int findPermutation(int n, int r) {
    int numerator = getFactorial(n);
    int denominator = getFactorial(n - r);

    return numerator / denominator;
}

int main() {
    int n, r;
    cout << "Enter n: ";
    cin >> n;
    cout << "Enter r: ";
    cin >> r;

    if (r > n || n < 0 || r < 0) {
        cout << "Invalid input!";
    }else{
        cout <<"Permutation (nPr): "
             <<findPermutation(n, r);
    }

    return 0;
}
