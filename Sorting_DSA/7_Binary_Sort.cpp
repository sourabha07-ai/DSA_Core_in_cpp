#include<iostream>
#include<vector>
using namespace std;

#define g "\033[32m"
#define r "\033[31m"
#define y "\033[33m"
#define reset "\033[0m"

void print(vector<int> & arr){
    for(int a:arr){
        cout <<a <<" ";
    }
    cout <<endl;
}

int search(vector<int> &arr,int target){
    int n = arr.size();
    int lower_index = 0, higher_index = n-1;
    while(lower_index <= higher_index){
        int mid_index = (lower_index + higher_index)/2;
        if(arr[mid_index] > target){
            higher_index = mid_index - 1;
        }else if(arr[mid_index] < target){
            lower_index = mid_index + 1;
        }else{
            return mid_index;
        }
    }
    return -1;
}
int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    cout <<"Array: ";
    print(arr);

    int target ;
    cout <<"Enter target: ";
    cin >> target;

    int target_num = search(arr,target);
    if(target_num >= 0) cout <<"Present index no: " <<target_num <<endl;
    else cout <<r <<"Not present in array." <<reset <<endl;


}