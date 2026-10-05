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

vector<int> searchRange(vector<int>& arr, int target) {
    vector<int> ans(2,-1);

     //first occurance
        int low = 0; int high = arr.size() - 1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(arr[mid] == target){
                ans[0] =  mid;
                high = mid -1;
            }else if(arr[mid] < target){
                low = mid + 1;
            }else{
                high = mid -1;
            }
        }
        
        low = 0,high = arr.size()-1;

        while(low <= high){
            int mid = low + (high - low)/2;

            if(arr[mid] == target){
                ans[1] =  mid;
                low = mid + 1;
            }else if(arr[mid] < target){
                low = mid + 1;
            }else{
                high = mid -1;
            }
        }

        return ans;
        }


int main(){
    vector<int> arr = {5,7,7,8,8,10};
    cout <<"array: ";print(arr);

    int target = 8;

    vector<int> result = searchRange(arr,target);

    cout <<"Output: ";print(result);
    
 
    return 0;
}