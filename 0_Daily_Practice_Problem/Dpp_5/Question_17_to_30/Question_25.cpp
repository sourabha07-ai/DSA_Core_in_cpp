/*
Write a function reverseNumber(int n) that takes an integer, reverses its digits math-
ematically, and uses the return keyword to give back the reversed integer to main().
Sample — Input: 1234 ⇒ Output: 4321
*/
#include <iostream>
using namespace std;

int reverseNumber(int n){
    int reverse = 0;
    while(n > 0){
         reverse = (reverse * 10) + n % 10;
         n /=10;
    }
    return reverse;
}

int main(){
    int n;
    cout <<"Enter number: ";
    cin >>n;
    cout <<"Your Number :" <<n <<endl;

    cout <<"Reverse Number: " << reverseNumber(n) <<endl;
 
}