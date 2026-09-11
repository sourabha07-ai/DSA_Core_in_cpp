#include <iostream>
using namespace std;
/*
Write a program that prints numbers starting from 1 up to 1000. However, the loopmust terminate immediately as soon as it encounters a number whose sum of digits equals 23
*/
int main(){
     for(int i = 1; i <= 1000; i++){
        int digit_sum = 0;
        int n = i;

        while(n > 0){
            int  digit = n % 10;
            n = n / 10;
            digit_sum = digit_sum + digit;
        }
        if(digit_sum != 23) cout << i <<" ";
        else break;
     }
}