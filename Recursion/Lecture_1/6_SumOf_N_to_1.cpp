#include <iostream>
using namespace std;

int sum(int n){
        if(n== 0) return 0;
        int res = n + sum(n - 1);
        return res;

}

int main(){
        int n ;
        cout <<"Enter number: ";
        cin >> n;

        cout <<"Sum of " <<n <<" to 1: ";
        int s = sum(n);
        cout<<s <<endl;

}