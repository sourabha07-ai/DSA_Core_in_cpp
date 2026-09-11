 #include <iostream>
using namespace std;

/*
Write a program to iterate through the numbers from 1 to 1000
and print only those numbers whose sum of digits is exactly 17.
*/

int main() {

    for (int i = 1; i <= 1000; i++) {

        int n = i;
        int sum = 0;

        while (n > 0) {
            int digits = n % 10;
            n = n / 10;
            sum = sum + digits;
        }

        if (sum == 17) {
            cout << i << " ";
        }
    }

    return 0;
}