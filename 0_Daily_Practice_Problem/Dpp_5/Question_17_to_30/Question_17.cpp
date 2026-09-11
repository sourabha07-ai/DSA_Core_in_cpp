#include <iostream>
using namespace std;

/* Write a program containing a function find Maximum(int a, int b, int c) that uses
the in built max() function to return the largest of three numbers. Call this function in main()*/
// Sample — Input: 12 45 9 ⇒ Output: 45

int Maximum(int a, int b, int c){
   return max(max(a,b),c);
}

int main(){
    int a,b,c;
    cout <<"Enter a: ";
    cin >>a;
    cout <<"Enter b: ";
    cin >>b;
    cout <<"Enter c: ";
    cin >>c;

   int max_value = Maximum(a,b,c);
   cout <<"Max_value: " <<max_value <<endl;


}