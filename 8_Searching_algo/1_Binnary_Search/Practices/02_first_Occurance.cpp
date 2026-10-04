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


int main(){
    vector<int> arr = {2, 5, 8, 8, 8, 12, 16, 20};
    cout <<"array: ";print(arr);

    int target = 8;

    int res = firstOccurance(arr,target);

    if(res == -1){
        cout <<"Target is not found!"<<endl;
    }else{
        cout <<"Target is index: "<<res<<endl;
    }

return 0;

}