#include<iostream>
using namespace std;

void update(int* p){
    *p = *p * 2;
}

int main(){
    int x = 12;
    update(&x);
    cout << x;

}