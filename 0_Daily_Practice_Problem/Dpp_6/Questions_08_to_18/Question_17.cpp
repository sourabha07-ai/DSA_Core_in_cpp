#include <iostream>
using namespace std;

int main(){
    int arr[] = {2,4,6,8};
    int* ptr = arr;
    cout << *ptr++ <<" ";
    cout << *++ptr <<" ";
    cout << ++*ptr <<endl;
}