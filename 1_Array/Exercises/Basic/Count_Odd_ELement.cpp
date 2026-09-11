#include <iostream>
using namespace std;

int main(){
    int nums[] = {12,13,14,15,16,17};

    for(int num : nums){
        if(num % 2 != 0){
            cout <<num <<" ";
        }
    }

}