#include<iostream>
using namespace std;

void print(int x, int n){
        if(x > n) return ;
        cout << x <<" ";
        print(x + 1,n);
}
int main(){
        int n ;
        cout <<"Enter a Number: ";
        cin >> n;

        cout <<"Print 1 to "<<n <<" ; ";
        print(1,n); cout <<endl;

        return 0;
}