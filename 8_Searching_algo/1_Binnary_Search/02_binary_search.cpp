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

int binarySearch(vector<int>&arr, int target) {
    //Code
    size_t n = arr.size();
    int lowIdx= 0,highIdx = n - 1;
 
    while(lowIdx <= highIdx){
        int midIdx = lowIdx+(highIdx - lowIdx)/2;

        if(arr[midIdx] == target){
            return midIdx;
        }else if(arr[midIdx] < target){
            lowIdx = midIdx + 1;
        }else{
            highIdx = midIdx - 1;
        }
    }
    return -1;

}


int main(){
    vector<int> arr = {10,20,30,40,50,60,70,80,90};
    cout<<"array: ";print(arr);

    int target;
    cout<<"Enter target: ";
    cin >> target;

    int result = binarySearch(arr,target);

    if(result == -1){
        cout <<"Target not found"<<endl;
    }else{
        cout <<"Target found at index:"<<result <<endl;
    }

    return 0;
}