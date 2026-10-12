
#include <iostream>
#include <string>
using namespace std;

int main() {
    string arr[] = {"0123", "0023", "456", "00182", "940", "2901"};

    int n = sizeof(arr) / sizeof(arr[0]);
    string max = arr[0];

    for (int i = 1; i < n; i++) {
        string a = arr[i];
        string b = max;

        // Remove leading zeros
        int x = 0, y = 0;

        while (x < a.length() - 1 && a[x] == '0')
            x++;

        while (y < b.length() - 1 && b[y] == '0')
            y++;

        a = a.substr(x);
        b = b.substr(y);

        if (a.length() > b.length() ||
            (a.length() == b.length() && a > b)) {
            max = arr[i];
        }
    }

    cout << max << endl;
    return 0;
}
