#include <iostream>
using namespace std;
/*Design a program to generate a geometric Hollow Star Diamond. (Assume n defines
the number of rows in the top half including the center)*/

int main()
{
    int n;
    cin >> n;

    // Top half including center
    for (int i = 1; i <= n; i++)
    {
        // Leading spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        // Stars and hollow spaces
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    // Bottom half
    for (int i = n - 1; i >= 1; i--)
    {
        // Leading spaces
        for (int space = 1; space <= n - i; space++)
        {
            cout << " ";
        }

        // Stars and hollow spaces
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1)
                cout << "*";
            else
                cout << " ";
        }

        cout << endl;
    }

    return 0;
}