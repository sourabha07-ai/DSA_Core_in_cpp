#include <iostream>
using namespace std;

int main(){
    int nums[6] = {12,13,42,45,66,54};
     for(int i = 0; i < sizeof(nums) / sizeof(nums[0]);i++){
        cout << nums[i] <<" ";
     }

    return 0;
}