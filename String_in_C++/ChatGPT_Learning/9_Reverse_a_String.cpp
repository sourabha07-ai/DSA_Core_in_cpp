#include <iostream>
#include<string>
using namespace std;

int main(){
     string a1 = "fdedcba";
     cout <<"Original string: " <<a1 <<endl;
     int n = a1.size();
     cout <<"Reverse string: ";
     for(int i = n-1; i >= 0;i--){
        cout <<a1[i] <<" ";
     }
     cout <<endl;

}