/*
Create a mini banking application demonstrating Global Variables. Declare a global
variable double balance = 0.0;. Write two functions deposit(double amount) and withdraw(double
amount) that modify this global state. Print the final balance from main().
Sample — deposit(500), withdraw(200) ⇒ Output: Balance: 300
*/

#include <iostream>
using namespace std;

// Global variable
double balance = 0.0;

// Deposit money
void deposit(double amount) {
    balance = balance + amount;
}

// Withdraw money
void withdraw(double amount) {
    balance = balance - amount;
}

int main() {
    deposit(500);
    withdraw(200);

    cout << "Balance: " << balance;

    return 0;
}