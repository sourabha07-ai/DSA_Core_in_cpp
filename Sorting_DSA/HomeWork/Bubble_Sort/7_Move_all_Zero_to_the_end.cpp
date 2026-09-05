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
        vector<int> arr = {0, 1, 0, 3, 12};
        cout << "array: ";
        print(arr);

        cout << "All zero to the end: ";
        int n = arr.size();
        int j = 0;

        for (int i = 0; i < n ; i++){
            if (arr[i] != 0){
                 swap(arr[i], arr[j]);
                  j++;
                }
        }
        print(arr);
}