#include <iostream>
#include <cstdlib>
using namespace std;
/*Write a function sumFirstAndLast(int n) that extracts the first and the last digit of a
given positive integer and returns their sum.
Input: 4529 ⇒ Output: 13 (Since 4 + 9 = 13)*/

int sumFirstAndLast(int n){
     n = abs(n);
    
    if(n <= 9){
        return n;
    }
    int last_digit = n % 10;
    int first_digit = n;
    while(first_digit >= 10){
        first_digit = first_digit / 10;
    }

    return first_digit + last_digit;
     
}

int main(){
    int number;
    cout <<"Enter a Number: ";
    cin >> number;

    cout <<"Sum of First and last digits: " <<sumFirstAndLast(number) <<endl;

}