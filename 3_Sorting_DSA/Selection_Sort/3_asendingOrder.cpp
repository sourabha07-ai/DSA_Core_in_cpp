#include <iostream>
#include <vector>
using namespace std;
void print(const vector<int> &arr)
{
        for (int a : arr)
        {
                cout << a << " ";
        }
        cout << endl;
}

int main()
{
        vector<int> arr = {64, 25, 12, 22, 11};
        cout << "array is: ";
        print(arr);

        size_t n = arr.size();
        for (int i = 0; i < n - 1; i++){
                int minIndex = i;
                for (int j = i + 1; j < n; j++){
                        if (arr[j] < arr[minIndex]){
                                minIndex = j;
                        }
                }
                swap(arr[minIndex], arr[i]);
        }
        cout << "Asending Order: ";
        print(arr);
}