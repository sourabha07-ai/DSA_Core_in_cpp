#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>&arr){
    #define reset   "\033[0m"
    #define r     "\033[31m"
    #define g   "\033[32m" 
    #define y  "\033[33m"
    for(int a:arr) cout <<y <<a <<" " <<reset;
    cout<<endl;
}

int searchInsert(vector<int> &arr, int target){

    if(target < arr[0]) return 0;
    int n = arr.size();
    if (target > arr[n-1]) return n;

    int low = 0,high = n - 1;

    while(low <= high ){
        int mid = low + (high - low)/2;

        if(arr[mid] == target){
            return mid;
        }else if(arr[mid] < target){
            low = mid + 1;
        }else{
            high = mid - 1;
        }
    }
   return low;
}

int main(){
    vector<int> arr = {1, 3, 5, 6};
    cout <<"array:";print(arr);
    int target = -8;
    cout <<"target:"<<target<< endl;

    int ans = searchInsert(arr,target);
    cout <<"Insert Index is:" << ans <<endl;



    return 0;
}