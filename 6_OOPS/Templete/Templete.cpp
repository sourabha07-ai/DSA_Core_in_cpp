#include <iostream>
using namespace std;

template <typename T>
T add(T num1,T num2){
    return num1 + num2;
}

int main(){
    cout <<"int add() function: " <<add<int>(12,23)<<endl;
    cout <<"Double add() function: " <<add<double>(2.4,5.6) <<endl;
}