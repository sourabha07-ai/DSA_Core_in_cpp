#include <iostream>
using namespace std;

void modify_by_Ref(int &x){
    x = x + 10;
}

int main(){
    int a = 5;
    modify_by_Ref(a);
    cout <<"a = " <<a;
}