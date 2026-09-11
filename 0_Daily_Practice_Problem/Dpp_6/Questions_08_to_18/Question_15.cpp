#include <iostream>
using namespace std;

int main(){
    int arr[5] = {1,2};
    cout << sizeof(arr) / sizeof(arr[0]) <<" " << arr[4];
}