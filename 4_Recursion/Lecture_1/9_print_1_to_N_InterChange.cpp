#include <iostream>
using namespace std;

void print(int n){
        if(n == 0) return;
        print(n - 1);
        cout <<n <<" ";
}

int main(){
        int n;
        cout <<"Enter a Number: ";
        cin >> n;

        cout<<"Print 1 to "<<n <<": ";
        print(n);cout <<endl;

        return 0;
}