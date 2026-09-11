/*
Check if an array is a Palindrome. An array is a palindrome if it reads the same forward
and backward.
Constraints: 1 ≤N ≤105, −109≤arr[i] ≤109.
Sample Input 1: {1, 2, 3, 2, 1} ⇒ Output: Palindrome
Sample Input 2: {1, 2, 3, 4} ⇒ Output: Not Palindrome
*/

 #include <iostream>
#include <vector>
using namespace std;

void checkPalindrome(vector<int>& arr) {
    int n = arr.size();

    for (int i = 0; i < n / 2; i++) {

        if (arr[i] != arr[n - 1 - i]){
            cout << "Not Palindrome" << endl;
            return;
        }
    }

    cout << "Palindrome" << endl;
}

int main() {

    vector<int> v1 = {1, 2, 3, 2, 1};

    cout << "Original array_1: ";
    for (int v : v1) cout << v << " ";
    cout << endl;
    checkPalindrome(v1);

    cout << endl;

    vector<int> v2 = {1, 2, 3, 4};

    cout << "Original array_2: ";
    for (int v : v2) cout << v << " ";
    cout << endl;
    checkPalindrome(v2);

    return 0;
}