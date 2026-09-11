#include <iostream>
using namespace std;

int main(){
    int arr[] = {21,23,8,9,-12,10};
    int n = size(arr);
    int smallest_ele = INT_MAX;

    for(int i = 0; i< n; i++){
        if(arr[i] < smallest_ele){
            smallest_ele = arr[i];
        }
    }
    cout <<"Smallest Element in array: "<<smallest_ele <<endl;
}
