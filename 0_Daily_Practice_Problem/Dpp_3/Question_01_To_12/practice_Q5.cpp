#include<iostream>
using namespace std;

int main(){
    int sum = 0;
    for(int i = 1; i <= 4; i++){
        if(i % 2 == 0) continue;
        sum += i;
    }
    cout <<sum ;
}