/*
Write a boolean function isPrime(int n) that checks if a number is prime. Then, in
main(), use this function in a loop to print all prime numbers between 1 and a user-provided
integer N.
Sample — Input: 10 ⇒ Output: 2 3 5 7
*/

#include <iostream>
using namespace std;

bool isPrime(int i){
    if(i <= 1){
        return false;
    }
    for(int j = 2; j * j <= i; j++){
        if(i % j == 0) 
            return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout <<"Prime numbers: ";
    for(int i = 1; i <= n;i++){
        if(isPrime(i)){
            cout <<i <<" ";
        }
    }

     
}