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

int floorSortedArray(vector<int> &arr,int target){
    int low = 0;int high = arr.size()-1;
     int floor = 0;
    while (low<=high){
     
        int mid = low + (high - low)/2;

        if(arr[mid] <= target){
            floor = arr[mid] ;
             low = mid + 1; 
        }else{
            high = mid - 1;
        }

    }
    return floor;

}

int main(){
    vector<int> arr = {1, 3, 5, 7, 9};
    cout << "array:";print(arr);

    int target = 7;
    cout <<"target:"<<target<<endl;

    int res = floorSortedArray(arr,target);
    cout<<"Floor: "<<res<<endl;
   
 
    return 0;
}