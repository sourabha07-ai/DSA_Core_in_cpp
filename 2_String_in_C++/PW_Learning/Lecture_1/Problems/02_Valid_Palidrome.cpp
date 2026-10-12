#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    cout << "Enter a String: ";
    //    getline(cin,str);
    cin >> str;
    bool valid = true;
    int i = 0, j = str.length() - 1;

    while (i < j){
        if (str[i] != str[j]){
            valid = false;
            break;
        }
        i++;
        j--;
    }
    if (valid){
        cout << "Valid Palindrom" << endl;
    }
    else{
        cout << "Invalid Palindrom" << endl;
    }

    return 0;
}