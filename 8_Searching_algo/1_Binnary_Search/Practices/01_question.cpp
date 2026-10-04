#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &arr){
#define reset "\033[0m"
#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
    for (int a : arr)
        cout << y << a << " " << reset;
    cout << endl;
}

int BinarySearch(vector<int> &arr, int target){

    int low = 0;
    int high = arr.size() - 1;

    while (low <= high){
        int mid = low + (high - low) / 2;

        if (arr[mid] == target){
            return mid;
        }
        else if (arr[mid] < target){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    return -1;
}

int main(){
    vector<int> arr = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    // vector<int> arr = {};
    cout << "array:";
    print(arr);

    int target = 23;

    int result = BinarySearch(arr, target);

    if (result == -1){
        cout << "Target not found!" << endl;
    }
    else{
        cout << "Target is present index: " << result << endl;
    }

    return 0;
}