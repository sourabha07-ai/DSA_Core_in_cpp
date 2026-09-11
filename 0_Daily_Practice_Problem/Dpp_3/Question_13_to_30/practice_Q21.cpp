#include <iostream>
using namespace std;
/*
Take an integer K as input. Two variables a and b can take any integer value from 1 to K. Write a program to print all possible ordered combinations of (a b) on a new line.
Sample — Input: 2 
Output:
1, 1
1, 2
2, 1
2, 2
*/

int main(){
    int k;
    cout <<"Input: ";
    cin >> k;

    for(int i = 1; i <= k;i++){
        for(int j = 1;j <= k; j++){
            cout <<i <<" " <<j <<endl ;
        }     
    }

}