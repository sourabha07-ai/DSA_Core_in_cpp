#include <iostream>
using namespace std;

int main(){
    int nums[] = {10,20,30,40,50};
    int n = size(nums);

    int mn = INT_MAX;
    for(int i = 0; i < n; i++){
        if(nums[i] < mn){
            mn = nums[i];
        }
    }
    cout <<"Smallest element in array: " <<mn <<endl;

    int s_min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(nums[i] < s_min && nums[i] > mn){
            s_min = nums[i];
        }
    }
    cout <<"Second smallest element in array: " <<s_min <<endl;

}