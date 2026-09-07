#include <iostream>
#include <vector>
using namespace std;

void print(const vector<int>& arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5};
    int n = arr.size();
    cout << "Array: ";
    print(arr, n);

    int j = 0;

    // Remove duplicates in-place
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            j++;
            arr[j] = arr[i];
        }
    }

    cout << "After removing duplicates: ";
    print(arr, j + 1);

    return 0;
}