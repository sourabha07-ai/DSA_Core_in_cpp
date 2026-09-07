#include <iostream>
using namespace std;

long long fact(int n){
        if(n == 0 || n == 1) return 1;
        long long ans =  n * fact(n - 1);
        return ans;
}
int main(){
        int n;
        cout <<"Enter n: ";
        cin >> n;

        cout<<"Factorial of "<<n <<" is:"<<fact(n)<<endl;

        return 0;
}