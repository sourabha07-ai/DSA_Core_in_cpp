#include <iostream>
using namespace std;

/*.Take an integer N as input and print the Fibonacci series upto N terms. 
(0,1,1,2,3,5,...)
Sample—Input: 6⇒Output: 0 1 1 2 3 5
*/

int main(){
    int n;
    cout <<"Enter n: ";
    cin >> n;
    int first_term = 0,second_term = 1;

if(n >= 1) cout <<first_term <<" " ;

if(n >= 2) cout <<second_term<<" ";
     
for(int i = 3; i <= n; i++){
    int next = first_term + second_term;
    cout << next <<" ";
    first_term = second_term;
    second_term = next;
    
   }

}    
    
    
