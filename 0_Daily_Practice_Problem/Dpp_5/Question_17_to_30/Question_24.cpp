#include <iostream>
using namespace std;
/* Write a program to print Pascal’s Triangle up to N rows. You MUST create a helper
function factorial(int x) and a combination function nCr(int n, int r) to calculate the
values in the triangle.
Sample — Input: 4 ⇒
Output:
1
1 1
1 2 1
1 3 3 1
*/
int factorial(int x){
    int fact = 1;
    for (int i = 1; i <= x; i++)
        fact *= i;
    return fact;
}

int nCr(int n, int r){
    return factorial(n) / (factorial(r) * factorial(n - r));
}

int main(){
    int n;
    cout << "Enter n: ";
    cin >> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j <= i; j++){
            cout << nCr(i, j) << " ";
        }
        cout << endl;
    }
}