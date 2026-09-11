#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40,50};
    size_t n1 = size(arr);

    cout <<"Original array: ";
    for(int a : arr){
        cout << a << " ";
    }
    cout <<endl;

    for(size_t i = 0; i < n1 / 2;i++){
        int temp = arr[i];
        arr[i] = arr[n1 - 1 - i];
        arr[n1 - 1 - i] = temp;
    }
    
    cout <<"Reverse array: ";
    for(int r:arr){
        cout <<r <<" ";
    }
    
    return 0;
}