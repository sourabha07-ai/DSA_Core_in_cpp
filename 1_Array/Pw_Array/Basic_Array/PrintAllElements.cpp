 #include <iostream>
 #include <string>
using namespace std;
#define r "\033[31m"
#define y "\033[33m"
#define reset "\033[0m"


int main() {
    int nums[] = {10, 20, 30, 40, 50};
    // cout <<size(nums) <<endl;

    for (size_t i = 0; i < size(nums); i++) {
        cout <<r << nums[i]  <<reset << " ";
    }
}