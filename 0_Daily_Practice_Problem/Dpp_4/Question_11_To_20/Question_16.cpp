#include <iostream>
using namespace std;
/*Create a program that takes an odd integer n and prints a Square with Diagonals. The
grid should display a solid outer boundary along with intersecting major and minor diagonals.*/

int main()
{
    int n;
    cin >> n;

    // Check if n is odd
    if (n % 2 == 0)
    {
        cout << "Please enter an odd integer.";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            // Outer boundary + main diagonal + minor diagonal
            if (i == 0 || i == n - 1 ||
                j == 0 || j == n - 1 ||
                i == j || i + j == n - 1)
            {
                cout << "*" <<" ";
            }
            else
            {
                cout << "  ";
            }
        }

        cout << endl;
    }

    return 0;
}