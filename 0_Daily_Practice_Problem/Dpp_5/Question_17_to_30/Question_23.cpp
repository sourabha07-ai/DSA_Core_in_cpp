#include<iostream>
using namespace std;
/*Write a function updateValues(int *a, int *b). The function should update the
value of a to the sum of a and b, and update the value of b to the absolute difference of their
original values. (Hint: Store actual values in temp variables first!)
Sample — Input: a = 4, b = 5 ⇒ Output after function call: a = 9, b = 1
*/
void updateValues(int *a, int *b){
    int temp_A = *a;
    int temp_B = *b;

    *a = temp_A + temp_B;
    *b = abs(temp_A - temp_B);
}

int main(){
    int a,b;
    cout <<"Enter a: ";
    cin >> a;
    cout <<"Enter b: ";
    cin >> b;
    cout <<"a = " <<a <<" " <<"b = " <<b <<endl;

    updateValues(&a, &b);
    cout <<"a = " <<a <<" " <<"b = " <<b <<endl;

}