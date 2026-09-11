/*
Create a program that demonstrates Double Pointers. Write a function changeTarget(int**
ptr, int* newAddress) that makes a pointer in main point to a completely different variable’s
address.
Sample context — int a = 10, b = 20; int *p = &a; Pass p to the function so that it
points to b instead.
*/
#include <iostream>
using namespace std;

void changeTarget(int** ptr, int* newAddress){
    *ptr = newAddress;

}

int main(){
    int a = 10, b = 20;
 int *p = &a;
 changeTarget (&p, &b);
 cout << *p << endl;


}