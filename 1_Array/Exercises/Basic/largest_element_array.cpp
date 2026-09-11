#include <iostream>
using namespace std;

int main(){
    int arr[] = {12,83,34,83,77};
    int n = size(arr);
    int largest_ele = INT_MIN;

    for(int i = 0;i <n ; i++){
        if(arr[i] > largest_ele){
            largest_ele = arr[i];
        }
    }
    cout <<"Largest Element in array: "<<largest_ele <<endl;
}