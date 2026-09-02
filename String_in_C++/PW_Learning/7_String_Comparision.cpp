#include <iostream>
#include <string>
using namespace std;

int main(){
        string str1 = "abc";
        string str2 = "abc";
        cout << boolalpha;

        if (str1 == str2){
           cout <<true << endl;
        }else{
          cout << false << endl;
        }
}