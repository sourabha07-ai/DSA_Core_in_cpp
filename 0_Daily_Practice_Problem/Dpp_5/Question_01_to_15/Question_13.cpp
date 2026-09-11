#include <iostream>
using namespace std;

int main(){
    int x = 10, y = 20;
    int* p = &x;
    p = &y;
    *p = 50 ;
    cout <<"x = " <<x <<" " <<"y = " <<y;
}