#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"



int main(){
    int nums[5] = {12,24,36,48,60};
    for(int num : nums){
        cout <<g <<num <<" " <<reset;
    }

    return 0;
}