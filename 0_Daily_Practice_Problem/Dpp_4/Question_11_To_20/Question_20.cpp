#include <iostream>
using namespace std;
/*Write a program to print an Expanding Number Diamond pattern for a given integer
n.*/
int main()
{
    int n;
    cin >> n;

    // Top half including the center
    for (int i = 1; i <= n; i++)
    {
        // Leading spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }

        // Increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j <<" ";
        }

        // Decreasing numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j <<" ";
        }

        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--)
    {
        // Leading spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << "  ";
        }

        // Increasing numbers
        for (int j = 1; j <= i; j++)
        {
            cout << j <<" ";
        }

        // Decreasing numbers
        for (int j = i - 1; j >= 1; j--)
        {
            cout << j<<" ";
        }

        cout << endl;
    }

    return 0;
}