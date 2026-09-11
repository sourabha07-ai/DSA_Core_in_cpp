#include<iostream>
using namespace std;

int main(){
    int arr[] = {12,-21,23,43,-2,90};
    int size_arr = sizeof(arr)/4;

    int min = arr[0];
    for(int i = 1;i <size_arr; i++){
        if(arr[i] < min) min = arr[i];
    }
    cout <<"Minimum Element: "<<min ;
}