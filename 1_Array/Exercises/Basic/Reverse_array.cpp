#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    int size_arr = size(arr);

    for(int i = size_arr-1;i >= 0;i--){
        cout << arr[i] <<" ";
    }
}