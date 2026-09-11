#include <iostream>
using namespace std;
/*
Take an integer as input and mathematically subtract 293 from it. Compute and print the reversed value of this new resulting integer. Ensure your logic correctly handles negativeresults.
Sample 1 — Input: 183 ⇒ Math: 183− 293 =−110 ⇒ Output: -11
Sample 2 — Input: 400 ⇒ Math: 400− 293 = 107 ⇒ Output: 701
Sample 3 — Input: 293 ⇒ Math: 293− 293 = 0 ⇒ Output: 0
*/

int main()
{
    int n;
    cout << "Enter input: ";
    cin >> n;

    int sub = n - 293;
    bool negative = sub < 0;

    if (sub < 0)
    {
        sub = -sub;
    }

    int reverse = 0;

    while (sub > 0)
    {
        int digit = sub % 10;
        reverse = reverse * 10 + digit;
        sub = sub / 10;
    }

    if (negative)
    {
        reverse = -reverse;
    }

    cout << reverse << endl;

    return 0;
}