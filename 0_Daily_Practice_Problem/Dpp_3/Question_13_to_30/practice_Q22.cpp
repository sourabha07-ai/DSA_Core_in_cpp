#include<iostream>
using namespace std;

/*
Write a program that prints all integers from 1 to 500 that contain the digit 2, the digit 7, or both, anywhere within their numerical representation.Sample — Output includes: 2, 7, 12, 17, 20, 21, 22, ...
*/
int main(){
   for (int i = 1; i <= 500; i++) {
        int n = i;

        while (n > 0) {
            int digit = n % 10;

            if (digit == 2 || digit == 7) {
                cout << i << " ";
                break;
            }

            n /= 10;
        }
    }

}