#include <iostream>
using namespace std;
/*Write a program that prints an Inscribed Hollow Diamond pattern. The pattern
consists of a solid rectangle of stars with a hollow diamond shape in the center.
Sample — Input: n = 5 ⇒
Output:

**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

int main()
{
    int n;
    cin >> n;
    // Top Half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n - i + 1; j++)
            cout << "*";
        for (int j = 1; j <= 2 * (i - 1); j++)
            cout << " ";
        for (int j = 1; j <= n - i + 1; j++)
            cout << "*";
        cout << endl;
    }
    // Bottom Half
    for (int i = n; i >= 1; i--)
    {
        for (int j = 1; j <= n - i + 1; j++)
            cout << "*";
        for (int j = 1; j <= 2 * (i - 1); j++)
            cout << " ";
        for (int j = 1; j <= n - i + 1; j++)
            cout << "*";
        cout << endl;
    }
}