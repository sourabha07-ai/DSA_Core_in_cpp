#include<iostream>
using namespace std;
/*
Write a program to take a number as input and compute the product of all its individual
digits.
Sample 1 — Input: 413 ⇒ Output: 12
Sample 2 — Input: 520 ⇒ Output: 0
*/

int main(){
    int n;
    cout <<"Enter input: ";
    cin >> n;

    int product = 1;

 while(n > 0){
    int digits = n % 10;
    product = product * digits;
    n = n / 10; 
            
}
        cout <<product <<endl;

     


}