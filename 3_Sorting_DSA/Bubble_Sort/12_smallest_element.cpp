#include <iostream>
#include <vector>
using namespace std;

int kthSmallest(vector<int> &arr, int k){
        int n = arr.size();

        // Bubble Sort
        for (int i = 0; i < n - 1; i++)
        {
                bool swapped = false;

                for (int j = 0; j < n - 1 - i; j++)
                {
                        if (arr[j] > arr[j + 1])
                        {
                                swap(arr[j], arr[j + 1]);
                                swapped = true;
                        }
                }

                if (!swapped)
                        break;
        }

        // What should you return?
        return arr[k-1];
}

int main(){
        vector<int> arr = {7, 2, 9, 4, 1, 5};
        cout << kthSmallest(arr, 3) <<endl;

        return 0;
}