#include<iostream>
using namespace std;
/*
Write a C++ program to swap two numbers using a function swapNumbers(int* a,
int* b). You must use pointers (pass by address) to perform the swap.
Sample — Input: 5 9 ⇒ Output: 9 5
*/

void swapNumbers(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;

}

int main(){
    int a,b;
    cout <<"Enter a: ";
    cin >> a;
    cout <<"Enter b: ";
    cin >> b;
    cout <<"a = " <<a <<" " <<"b = " <<b <<endl; 

     swapNumbers(&a, &b);
    cout <<"a = "<< a <<" " <<"b = " << b <<endl;


}