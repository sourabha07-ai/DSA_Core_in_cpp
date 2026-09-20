#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(const  vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
     vector<int> arr = {10,12,34,21,32,1,11,23,9,0,-12};
     cout <<"Unsorted array: ";
     print(arr);   
    
     cout <<"Reverse Sorted array: ";
     int n = arr.size();
    
     for(int i = n - 1;i > 0;i--){
        bool swapped = false;
        for(int j = i ;j > 0;j--){
                if(arr[j] > arr[j - 1]){
                    swap(arr[j],arr[j - 1]);
                    swapped = true;
                }
        }
        if(!swapped) break;
     }
     print(arr);
}