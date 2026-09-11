#include<iostream>
#include<algorithm>
using namespace std;
 
/*Write a program to check if a given number is a Palindrome. A palindrome number reads the same forwards and backwards.
Sample 1 — Input: 121 ⇒ Output: Palindrome
Sample 2 — Input: 145 ⇒ Output: Not a Palindrome
*/

int main(){
    int n;
    cout <<"Enter a Number: ";
    cin >> n;

    string s = to_string(n);
    reverse(s.begin(),s.end());
    int r_num = stoi(s);
    cout <<"Reverse: " <<r_num <<endl;
   
    if(r_num == n){
      cout <<"palindrome";
    }else{
        cout <<"Not Palindrome";
    }



     

    return 0;
}