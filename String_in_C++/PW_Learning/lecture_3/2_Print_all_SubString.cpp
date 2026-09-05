#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){
     string str;
     cout <<"Enter a String: ";
     getline(cin,str);
     int n = str.size();
     for(int i = 0;i < n ;i++){
        for(int j = 1;j <= n - i;j++){
              cout<< str.substr(i,j) <<" ";  
        }
        cout <<endl;
     }   
}