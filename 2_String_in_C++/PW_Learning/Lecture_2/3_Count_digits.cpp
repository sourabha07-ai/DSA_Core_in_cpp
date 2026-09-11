#include <iostream>
#include <string>
using namespace std; 

int main(){
        int n ;
        cout <<"Enter a number: ";
        cin >> n;

        string str = to_string(abs(n));
        cout <<str.length() <<endl;
  
    return 0;
}