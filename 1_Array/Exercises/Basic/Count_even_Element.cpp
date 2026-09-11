#include <iostream>
using namespace std;

int main(){
    int nums[] = {12,13,14,15,16,17};
    int n = size(nums);

    for(int i = 0; i < n; i++){
        if(nums[i] % 2 == 0){
            cout << nums[i] <<" ";
        }
    }

}