#include <iostream>
using namespace std;
/*Write a program to print the classic Butterfly Pattern. This layout consists of two
mirrored growing right triangles on the top half, and two mirrored shrinking right triangles on
the bottom half, separated by precise hollow space.*/

int main()
{
    int n;
    cin >> n;

    // Top half
    for (int i = 1; i <= n; i++)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Hollow spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--)
    {
        // Left stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        // Hollow spaces
        for (int j = 1; j <= 2 * (n - i); j++)
        {
            cout << " ";
        }

        // Right stars
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}