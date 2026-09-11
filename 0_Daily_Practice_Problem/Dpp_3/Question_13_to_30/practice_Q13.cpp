#include<iostream>
using namespace std;
/*
Take a positive integer N as input and compute the sum of all natural numbers from 1up to N using a loop.
Sample 1 — Input: 5 ⇒ Output:15 
Sample 2 — Input: 10 ⇒ Output: 55
*/

int main(){
    int n;
    cout <<"Input n: ";
    cin >> n;
    int sum = 0;

    for(int i = 1; i <= n; i++){
        sum +=i;

    }
    cout <<"Output: " <<sum <<endl;
 
}