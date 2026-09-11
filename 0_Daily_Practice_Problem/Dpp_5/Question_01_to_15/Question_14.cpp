#include <iostream>
using namespace std;

int globalVar = 10;
void mysteryFunction(int* ptr, int &ref){
    *ptr = ref + globalVar;
    ref = *ptr - 5;
    globalVar++;
}
int main(){
    int a = 20, b = 30;
    mysteryFunction(&a, b);
        cout <<a <<" " <<b <<" " <<globalVar;
    

}