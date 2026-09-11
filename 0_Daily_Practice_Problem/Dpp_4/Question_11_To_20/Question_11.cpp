#include <iostream>
using namespace std;
/*Take an odd integer n as input from the user (n ≥ 3). Write a program to print a " Plus inside Square Boundary" pattern.
Sample — Input: n = 15 ⇒ Output:
***************
*      *      *
*      *      *
*      *      *
*      *      *
*      *      *
*      *      *
***************
*      *      *
*      *      *
*      *      *
*      *      *
*      *      *
*      *      *
***************
*/

int main(){
    int n;
    cout <<"Enter n: ";
    cin >> n;

     int mid = n / 2;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {

            if (i == 0 || i == n - 1 ||
                j == 0 || j == n - 1 ||
                i == mid || j == mid) {
                cout << "*" <<" ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }

}