#include <iostream>
using namespace std;

int gcd(int a, int b){
     while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
     }
     return a;
}

int main(){
        int m,n;
        cout <<"First number: ";
        cin >>m;
        cout <<"Second number: ";
        cin >>n;
        cout <<"HCF (Highest Common Factor).:";
       cout << gcd(m,n) <<endl;
}