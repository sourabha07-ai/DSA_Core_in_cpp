#include <iostream>
using namespace std;

int hcf(int a, int b){
        for (int i = min(a, b); i >= 1; i--){
                if (a % i == 0 && b % i == 0)
                        return i;
        }
        return 1;
}

int main(){
        int a, b;
        cout << "Enter first number: ";
        cin >> a;
        cout << "Enter second number: ";
        cin >> b;

        cout << "HCF(Highest Common Factor): ";
        cout << hcf(a, b) << endl;

        return 0;
}