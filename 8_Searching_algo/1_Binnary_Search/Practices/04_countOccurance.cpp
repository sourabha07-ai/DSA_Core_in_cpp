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

int firstOccurance(vector<int>&arr,int target){
    int low = 0,high = arr.size()-1;
    
    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            ans = mid;
            high = mid - 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
        
    }
    return ans;
}

int lastOccurance(vector<int>&arr,int target){
    int low = 0; int high = arr.size() - 1;

    int ans = -1;

    while(low <= high){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            ans = mid;
            low = mid + 1;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
    return ans;

}

int countOccurrence(vector<int>& arr, int target){
    int first = firstOccurance(arr,target);

    if(first == -1){
        return 0;
    }
    int last = lastOccurance(arr,target);

    int count = last - first + 1;

    return count;

}

int main(){
      vector<int> arr = {2, 5, 8, 8, 8, 12, 16, 20};
    cout <<"array: ";print(arr);

    // int target = 8;
    int target = 10;

    int count = countOccurrence(arr,target);
    cout <<"Count Occurance:"<<count <<endl;

    return 0;
}