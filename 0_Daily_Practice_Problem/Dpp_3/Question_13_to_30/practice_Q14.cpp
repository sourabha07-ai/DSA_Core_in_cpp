#include <iostream>
using namespace std;
/* 
Write a program that takes two integers as input and prints all the even numbers located
strictly between them.
Sample 1 — Input: 3 10 ⇒ Output: 4 6 8
Sample 2 — Input: 12 21 ⇒ Output: 14 16 18 20
*/

int main(){

int first, second;
cout << "Enter a first number: ";
cin >> first;
cout <<"Enter a Second number: ";
cin >> second;

cout <<"Between Numbers: ";
//Method-1 

if(first == second){
    cout <<"Both are Same.";
}
else if(first < second){
    for(int i = first+1; i < second;i++){
        if(i % 2 == 0) cout << i <<" ";
    }
}
else{
    for(int i = second + 1; i < first; i++){
        if(i % 2 == 0) cout << i <<" ";
    }
}

// Method-2

// int start = min(first, second);
// int end = max(first, second);

// for (int i = start + 1; i < end; i++) {
//     if (i % 2 == 0)
//         cout << i << " ";
// }



    return 0;
}