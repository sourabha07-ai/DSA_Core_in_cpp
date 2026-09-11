#include <iostream>
using namespace std;

int main() {
    int* arr = new int[7]{}; // All elements are initialized to 0
    arr[0] = 4;

    for (int i = 0; i < 7; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
}