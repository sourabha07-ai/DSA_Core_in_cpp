#include<iostream>
using namespace std;

void printDetails(int a, int b = 10,int c = 20){
    cout <<"a = " <<a <<" " <<"b = " <<b <<" " <<"c = " <<c <<" ";
}

int main(){
    printDetails(5);
    cout <<endl;
    printDetails(5,15);
    
}