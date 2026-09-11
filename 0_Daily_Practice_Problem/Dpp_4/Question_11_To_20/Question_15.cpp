#include <iostream>
using namespace std;
/* Write a program to print a symmetric Cross Alphabet Pattern for a given integer n.*/
int main()
{
    int n;
    cout <<"Enter n: ";
    cin >> n;

    int totalRows = 2 * n - 1;

    for (int i = 1; i <= totalRows; i++)
    {
        for (int j = 1; j <= totalRows; j++)
        {
            if (i == j || i + j == totalRows + 1)
            {
                int offset;

                if (i <= n)
                    offset = i - 1;
                else
                    offset = totalRows - i;

                cout << char('A' + offset);
            }
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }

    return 0;
}