#include <iostream>
#include <iterator>
using namespace std;

int main()
{
    int nums[] = {12, 13, 24, 15, 25};
    int n = size(nums);

    int search;
    cout << "Enter element to search: ";
    cin >> search;

    bool found = false;

    for (int i = 0; i < n; i++){
        if (nums[i] == search){
            found = true;
            break;
        }
    }

    if (found){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found!" << endl;
    }

    return 0;
}
