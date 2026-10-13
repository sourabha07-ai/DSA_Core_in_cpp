#include<iostream>
#include<string>
using namespace std;

int main(){
     string str = "1234";
     int n = str.length();
     int x = 0;
     for(int i = 0;i < n;i++){
        for(int j = 1;j <= n -i;j++){
               x += stoi(str.substr(i, j));
            // cout <<stoi(str.substr(i, j))<<" ";
        }
     }

    cout <<"Sum is: "<<x<<endl;
   
 
    return 0;
}