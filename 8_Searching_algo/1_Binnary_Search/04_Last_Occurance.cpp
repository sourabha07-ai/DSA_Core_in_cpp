#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    #define reset   "\033[0m"
    #define r     "\033[31m"
    #define g   "\033[32m" 
    #define y  "\033[33m"
    for(int a:arr) cout <<y <<a <<" " <<reset;
    cout<<endl;
}

int lastOccurrence(vector<int>& arr, int target) {
    //Code
    int low = 0;int high = arr.size() - 1; 
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;
        if(arr[mid] ==target){
            ans = mid;
            low = mid + 1;
        }else if (arr[mid] > target){
            high = mid - 1;
        }else{
            low = mid + 1;
        }
    }
   return ans;
}
int main(){
    vector<int> arr = {10, 20, 30, 30, 30, 40, 50};
    cout <<"array: "; print(arr);

    int result = lastOccurrence(arr,30);
    
    if(result == -1){
        cout <<"Target not found"<<endl;
    }else{
        cout <<"Target found at index:"<<result <<endl;
    }
 
    return 0;
}