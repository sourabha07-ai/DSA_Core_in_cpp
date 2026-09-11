#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int units;
    double bill, surcharge, totalBill;

    cout << "Enter electricity units: ";
    cin >> units;

    if (units <= 100) {
        bill = units * 1.50;
    }
    else if (units <= 300) {
        bill = (100 * 1.50) + ((units - 100) * 2.50);
    }
    else {
        bill = (100 * 1.50) + (200 * 2.50) + ((units - 300) * 4.00);
    }

    surcharge = bill * 0.15;
    totalBill = bill + surcharge;

    cout << fixed << setprecision(2);
    cout << "Total Bill = $" << totalBill << endl;

    return 0;
}