#include <iostream>
using namespace std;
/*
Take a positive integer input from the user and print its prime factors.
Sample — Input: 60 ⇒ Output: 2 2 3 5
*/

int main(){
    int n;
    cout <<"Enter n: ";
    cin >>n;

    for(int i = 2;i <= n; i++){
        while(n % i == 0){
            cout << i <<" ";
            n = n / i;
        }
    } 
}