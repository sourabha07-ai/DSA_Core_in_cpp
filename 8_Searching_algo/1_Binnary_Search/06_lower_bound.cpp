#include <iostream>
#include <vector>
using namespace std;
void print(vector<int> &arr)
{
#define reset "\033[0m"
#define r "\033[31m"
#define g "\033[32m"
#define y "\033[33m"
    for (int a : arr)
        cout << y << a << " " << reset;
    cout << endl;
}

int main()
{
    vector<int> arr = {10, 20, 30, 40, 50, 60};
    cout << "array: ";
    print(arr);

    int target = 35;

    int low = 0;
    int high = arr.size() - 1;
    int ans = arr.size();

    while (low <= high){
        int mid = low + (high - low)/2;

        if (arr[mid] >= target){
            ans = mid;
            high =mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    cout << ans <<endl;

    return 0;
}