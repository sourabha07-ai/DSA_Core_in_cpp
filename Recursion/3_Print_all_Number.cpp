#include <iostream>
using namespace std;

void print(int n){
     if(n==0) return;//Base Case : Stop the recursion
     cout<<n <<" "; //Work
     print(n - 1); //Calls
}

int main(){
    int n ;
    cout <<"Enter n: ";
    cin >> n;
 
    cout<<"Numbers: ";
    print(n);
    cout <<endl;
}