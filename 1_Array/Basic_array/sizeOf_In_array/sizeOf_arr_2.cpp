#include <iostream>
using namespace std;

int main(){
     int myNum[5] = {10,20,30,40,50};
     int getArraySize = sizeof(myNum) / sizeof(myNum[0]);
     cout << getArraySize <<endl;


    return 0;
}