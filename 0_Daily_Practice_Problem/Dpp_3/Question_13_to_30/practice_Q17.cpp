#include<iostream>
using namespace std;

/*
 Write a program to find if a given positive integer is a Perfect Number. A perfect number
is a positive integer that is equal to the sum of its proper divisors. (A proper divisor of a number
is a positive divisor of the number, excluding the number itself.)
Sample 1 — Input: 28 ⇒ Output: Perfect Number
(Explanation: Since 1 + 2 + 4 +7+14 = 28)
Sample 2 — Input: 12 ⇒ Output: Not a Perfect Number
(Explanation: Since 1 + 2 + 3 +4+6 = 16 ̸ = 12
*/

int main(){
    int n;
    cout <<"Enter n: ";
    cin >> n;

    int count = 0;
    for(int i = 1;i <= n/2 ;i++){
        if(n % i == 0) count += i;
    }
    if(count == n) cout <<"Perfect Number."<<endl;
    else cout <<"Not a Perfect Number." <<endl;
    

    return 0;
}