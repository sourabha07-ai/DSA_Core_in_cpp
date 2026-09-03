#include <iostream>
#include <string>
using namespace std; 

int main(){
        string str = "Sourabha Jena";
        cout <<"String: "<<str <<endl;

        string result = str.substr(0,8);  //! str.substr(start, length);
        cout <<"Result: " <<result <<endl;
  
    return 0;
}