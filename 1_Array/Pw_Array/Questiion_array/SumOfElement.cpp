#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter Size of array: ";
    cin >> num;

    int arr[num];
    int sum = 0;

    for (int i = 0; i <= num - 1; i++)
    {
        cout << "Enter " << i << ": ";
        cin >> arr[i];
        sum +=arr[i];
    }
     
    cout << "Element Sum: " << sum << endl;
    return 0;
}