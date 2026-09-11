#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the Size of array: ";
    cin >> num;

    int arr[num];
    for(int i = 0; i < num;i++ ){
        cout <<"Enter " <<i+1 <<": ";
        cin >>arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < num; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "Maximum: " << max << endl;
}