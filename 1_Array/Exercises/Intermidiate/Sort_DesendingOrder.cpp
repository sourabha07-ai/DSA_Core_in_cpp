#include <iostream>
using namespace std;

int main(){
    int nums[] = {12,9,43,24,21,67};
    int n = size(nums);

    cout <<"Original array: ";
    for(int a:nums){
        cout <<a <<" ";
    }

    cout <<endl;

    for(int i = 0;i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(nums[i] < nums[j]){
                 int temp = nums[i];
                 nums[i] = nums[j];
                 nums[j] = temp;
            }
        }
    }

    cout <<"Sorting Descending Order: ";
    for(int desc_arr:nums){
        cout <<desc_arr <<" ";
    }

}