#include <iostream>
#include <string>
using namespace std;

class Solution {
public:

    bool notValid(char ch) {
        if(ch >= 'A' && ch <= 'Z')
            return false;

        if(ch >= 'a' && ch <= 'z')
            return false;

        if(ch >= '0' && ch <= '9')
            return false;

        return true;
    }

    bool isPalindrome(string s) {

        int n = s.length();

        int i = 0;
        int j = n - 1;

        while(i < j) {

            char x = s[i];
            char y = s[j];

            // Convert uppercase to lowercase
            if(x >= 'A' && x <= 'Z')
                x += 32;

            if(y >= 'A' && y <= 'Z')
                y += 32;

            // Skip invalid characters
            if(notValid(x))
                i++;

            else if(notValid(y))
                j--;

            else {
                // Compare characters
                if(x != y)
                    return false;

                i++;
                j--;
            }
        }

        return true;
    }
};

int main() {

    Solution obj;

    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    bool result = obj.isPalindrome(s);

    if(result) cout << "Palindrome" << endl;
    else cout << "Not Palindrome" << endl;

    return 0;
}