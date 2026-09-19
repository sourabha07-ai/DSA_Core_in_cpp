#include <iostream>
#include <vector>
using namespace std;

int kthLargest(vector<int>& arr, int k) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped)
            break;
    }

    return arr[n - k];
}

int main() {
    vector<int> arr = {3, 2, 1, 5, 6, 4};

    int k;
    cout << "Enter k: ";
    cin >> k;

    if (k < 1 || k > arr.size()) {
        cout << "Invalid k!" << endl;
        return 0;
    }

    cout << "K-th Largest: " << kthLargest(arr, k) << endl;

    return 0;
}