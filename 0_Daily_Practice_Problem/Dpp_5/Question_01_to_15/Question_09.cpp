#include <iostream>
using namespace std;

int square(int n){
    return n * n;
}

int addFive(int n){
    return square(n) + 5;
}

int main(){
    cout <<addFive(4);

    return 0;
}