#include <iostream>
using namespace std;

// Given the number of sides n of a simple polygon and the sum of all its interior angles
// S, write a program to check if the user has provided valid dimensional specifications. Use the
// structural formula:
// S = (n −2) ×180◦
// Sample — Input: Sides = 3, Sum = 180 ⇒ Output: Valid Polygon

#include <iostream>
using namespace std;

int main() {
    int n, S;

    cout << "Enter number of sides: ";
    cin >> n;

    cout << "Enter sum of interior angles: ";
    cin >> S;

    if (n >= 3 && S == (n - 2) * 180) {
        cout << "Valid Polygon";
    } else {
        cout << "Invalid Polygon";
    }

    return 0;
}