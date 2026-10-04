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

int binarySearchDecreasing(vector<int> &arr,int target){

    int low = 0;int high = arr.size() - 1;

    while(low <= high){
        int mid = low+(high - low)/2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
return -1;

}

int main(){
   
    // vector<int> arr = {179,124,120,99,87,79,44,24,19,-4};
    vector<int> arr = {20, 16, 12, 8, 5, 2};
     int target = 8;
    cout <<"array: ";print(arr);

    // int target = 44;
    

    int res = binarySearchDecreasing(arr,target);

    if(res == -1){
        cout <<"Target is not found!"<<endl;
    }else{
        cout <<"Target is index: "<<res<<endl;
    }

    return 0;
 
    return 0;
}