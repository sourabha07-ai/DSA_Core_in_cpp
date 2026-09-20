#include <iostream>
#include <vector>
using namespace std;

int  SearchInsertPosition(vector<int> & arr,int target){
    int n = arr.size();
    if(target < arr[0]){
        return 0;
    }
    if(target > arr[n-1]){
        return n;
    }

     int lo_idx = 0, hi_idx = n-1;
     while(lo_idx <= hi_idx){
        int mid = (lo_idx+hi_idx)/2;
        if(arr[mid] > target){
            hi_idx = mid - 1;
        }else if(arr[mid] < target){
            lo_idx = mid + 1;
        }else{
             return mid;
        }
     }

     return lo_idx;


}


int main(){
   vector<int> arr = {1,2,3,4,5,7,8,9};
   int target = -1;
  int index_num =  SearchInsertPosition(arr,target);
  cout <<"Index no. " <<index_num <<endl;
}