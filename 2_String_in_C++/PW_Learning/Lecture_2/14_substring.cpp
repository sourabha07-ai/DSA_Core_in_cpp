#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "abcd";

    for (int i = 0; i < str.length(); i++) {
        for (int j = 1; j <= str.length() - i; j++) {
            cout << str.substr(i, j) << " ";
        }
        cout << endl;
    }

    return 0;
}