#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "926";
    int sum = 0;
    int current = 0;

    for(int i = 0; i < str.length();i++){
        int digit = str[i] - '0';
        
        current = current * 10 + digit * (i+1);

        sum = sum + current;
        
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}
