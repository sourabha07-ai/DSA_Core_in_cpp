#include <iostream>
using namespace std;

int hcf(int a, int b)
{
        if (a == 0)
                return b;
        return hcf(b % a, a);
}

int main()
{
        int a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "HCF(Highest Common Factor): ";
        cout << hcf(a, b) << endl;
}