#include <iostream>
#include<iterator>
using namespace std;

int main(){
    int nums1[] = {11,10,23,12,34,2};
    int n = sizeof(nums1) /sizeof(nums1[0]);
    
    int copy_arr[n];
    
    cout <<"Original array: ";
    for(int i = 0; i < n; i++){
        cout << nums1[i] <<" ";
    }

    for(int i = 0; i < n; i++){
        copy_arr[i] = nums1[i];
    }
    cout <<endl;

    cout <<"Copy array: ";
   for(int i = 0; i < n;i++){
      cout <<copy_arr[i] <<" ";
   }

}