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

void merge_Sort(vector<int> &a, vector<int> &b, vector<int> &c)
{
        int i = 0, j = 0, k = 0;
        while (i < a.size() && j < b.size())
        {
                if (a[i] < b[j])
                        c[k++] = a[i++];
                else
                        c[k++] = b[j++];
        }
        while (i < a.size())
                c[k++] = a[i++];
        while (j < b.size())
                c[k++] = b[j++];
}

void mergeSort(vector<int> &arr)
{
        int n = arr.size();
        if (n == 1) return;

        vector<int> a(n / 2);
        vector<int> b(n - n / 2);
        int index_no = 0;

        for (int i = 0; i < n / 2; i++){
                a[i] = arr[index_no++];

        }
        for(int i = 0;i < n - n/2;i++){
                b[i] = arr[index_no++];
        }

        mergeSort(a);
        mergeSort(b);
        merge_Sort(a,b,arr);

}

int main()
{
        vector<int> arr = {5, 2, 8, 3, 7, 1, 4, 6};
        cout << "My array: ";
        print(arr);

        cout<<"Merge Sort: ";
        mergeSort(arr);
        print(arr);
}