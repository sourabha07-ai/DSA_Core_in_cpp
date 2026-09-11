 #include <iostream>
using namespace std;

int main()
{
    int arr_1[] = {12, 14, 16, 17, 20};
    int arr_2[] = {13, 15, 18, 19};

    int size_arr_1 = sizeof(arr_1) / sizeof(arr_1[0]);
    int size_arr_2 = sizeof(arr_2) / sizeof(arr_2[0]);

    cout << "Size of first array: " << size_arr_1 << "\n";
    cout << "Size of second array: " << size_arr_2 << "\n";

    int merge_arr[size_arr_1 + size_arr_2];

    // Start from the last elements
    int i = size_arr_1 - 1;
    int j = size_arr_2 - 1;
    int k = size_arr_1 + size_arr_2 - 1;

    // Compare and insert larger element from the end
    while (i >= 0 && j >= 0){
        if (arr_1[i] > arr_2[j]){
            merge_arr[k] = arr_1[i];
            i--;
        }else{
            merge_arr[k] = arr_2[j];
            j--;
        }
        k--;
    }

    // Copy remaining elements of arr_1
    while (i >= 0)
    {
        merge_arr[k] = arr_1[i];
        i--;
        k--;
    }

    // Copy remaining elements of arr_2
    while (j >= 0)
    {
        merge_arr[k] = arr_2[j];
        j--;
        k--;
    }

    cout << "Merged array: ";
    for (int i = 0; i < size_arr_1 + size_arr_2; i++){
        cout << merge_arr[i] << " ";
    }

    return 0;
}