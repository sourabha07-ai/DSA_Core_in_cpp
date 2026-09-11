#include <iostream>
using namespace std;

int main(){
    int arr[] = {23,14,21,90,56,74,89,34,9};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout <<"Original array: ";
    for(int a:arr){
        cout << a <<" ";
    }
    cout <<endl;

    for(int i = 0; i < n;i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout <<"Sorting arry: ";
    for(int i = 0; i < n;i++){
        cout << arr[i] <<" ";
    }


    return 0;
}