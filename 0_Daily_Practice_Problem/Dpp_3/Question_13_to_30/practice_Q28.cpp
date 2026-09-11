#include <iostream>
#include<algorithm>
#include <cmath>
using namespace std;
/*Write a program that accepts an integer input and finds the strictly next prime number that appears after it. If the user provides an input greater than 500, immediately print "InvalidInput" and terminate.
Sample 1 — Input: 14 ⇒ Output: 17
Sample 2 — Input: 499 ⇒ Output: 503
Sample 3 — Input: 505 ⇒ Output: Invalid Input
*/

int main(){
    int n;
    cout <<"Enter Number(1 to 500): ";
    cin >> n;


    if(n > 500){
        cout <<"Invalid input.";
    }else{
        for(int i = n + 1;i <= 503; i++){
            bool isPrime = true;
            for(int j = 2; j <= sqrt(i); j++){
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }   
            if(isPrime){
                if(i > n){
                    cout << i << " ";
                    break;
                }
            }
        }
    }

}