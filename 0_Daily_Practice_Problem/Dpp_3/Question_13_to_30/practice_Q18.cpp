#include<iostream>
using namespace std;

/*
 Write a program to print all integers from 1 to 500 that are not divisible by 3. You must
use the continue keyword.
*/

int main(){

    for(int i = 1; i <= 500; i++){
        if(i % 3 == 0) continue;
        cout  <<i <<" ";
    }
}