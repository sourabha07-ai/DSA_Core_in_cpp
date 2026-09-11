#include <iostream>
using namespace std;
/*Write a program to construct an Alphabet Palindrome Pyramid. For a given n, each
row should print letters sequentially increasing to a peak character, and then symmetrically
decreasing back to ’A’. Use precise spacing to center the pyramid*/

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        // Print leading spaces
        for (int space = 0; space < n - i - 1; space++)
        {
            cout << " ";
        }

        // Print increasing characters
        for (int j = 0; j <= i; j++)
        {
            cout << char('A' + j);
        }

        // Print decreasing characters
        for (int j = i - 1; j >= 0; j--)
        {
            cout << char('A' + j);
        }

        cout << endl;
    }

    return 0;
}