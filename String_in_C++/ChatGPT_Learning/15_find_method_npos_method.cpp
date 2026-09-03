#include <iostream>
#include <string>
using namespace std; 

//!Find a substring or character.

int main(){
        string str = "Aeioustbfhsxmvhfirfhveb";
        cout <<str.find('b') <<endl;
        
       string name = "Sourabha";
       string str2 = (name.find("c") == string::npos) ? "not Found":"found";
       cout << str2 <<endl;

        string s1 = "Hello world";
        if(str.find("xyz") == string::npos){
            cout <<"Not Found" <<endl;
        }


  
    return 0;
}