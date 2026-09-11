#include <iostream>
using namespace std;

/*
Write a program that takes two positive integers as input
and prints all the prime numbers that lie strictly between them.

Sample 1 — Input: 10 20 ⇒ Output: 11 13 17 19
Sample 2 — Input: 20 30 ⇒ Output: 23 29
*/

int main() {
    int m, n;

    cout << "Enter first number: ";
    cin >> m;

    cout << "Enter Last number: ";
    cin >> n;

    for (int i = m + 1; i < n; i++) {
        bool isPrime = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) cout << i << " ";
    }
}