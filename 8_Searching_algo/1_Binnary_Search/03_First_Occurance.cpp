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

int firstOccurrence(vector<int>& arr, int target) {
    //Code
    int lowIdx= 0,highIdx = arr.size()- 1;
    int ans = -1;

    while(lowIdx <= highIdx){
        int mid = lowIdx + (highIdx - lowIdx)/2;

        if(arr[mid]==target){
            ans = mid;
           highIdx = mid - 1;
        }else if(arr[mid] < target){
             lowIdx = mid + 1;
        }else{
             highIdx = mid - 1;
        }
    }
    return ans; 

}
int main(){
   vector<int> arr = {10, 20, 30, 30, 30, 40, 50};
   cout <<"array: ";print(arr);

    int result = firstOccurrence(arr,30);

    if(result == -1){
        cout <<"Target not found"<<endl;
    }else{
        cout <<"Target found at index:"<<result <<endl;
    }
 
    return 0;
}