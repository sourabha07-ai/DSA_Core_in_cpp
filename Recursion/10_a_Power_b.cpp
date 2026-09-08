#include <iostream>
using namespace std;

int power(int a, int b){
        if(b == 0) return 1;
        int p = a * power(a,b-1);
        return p;

}

int main(){
        int a,b; //Only positive and b != negative
        cout <<"Enter Base(a): ";
        cin >>a;
        cout <<"Enter power(b): ";
        cin >>b;

        cout <<a <<" power of "<<b <<" is: ";
        cout<<power(a,b);
        cout <<endl;


}