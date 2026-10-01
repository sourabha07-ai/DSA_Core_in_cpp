#include <iostream>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

class MyVector {
private:
    int length;
    int* arr;
    int cap;

public:

    // Constructor
    MyVector(int capacity, int default_value) {
        length = cap = capacity;

        arr = new int[capacity];

        for (int i = 0; i < capacity; i++) {
            arr[i] = default_value;
        }
    }

    // Destructor
    ~MyVector() {
        delete[] arr;
    }

    // Pop the element
    void pop_back() {
        if (length == 0) {
            cout << "Vector is empty!" << endl;
            return;
        }

        length--;
    }

    // Size of vector
    int size() {
        return length;
    }

    // Capacity of vector
    int capacity() {
        return cap;
    }

    // Get index value
    int get(int index) {
        if (index < 0 || index >= length) {
            cout << "Index out of bound!" << endl;
            return -1;
        }

        return arr[index];
    }

    // Update index value
    int set(int index, int value) {
        if (index < 0 || index >= length) {
            cout << "Index out of bound!" << endl;
            return -1;
        }

        arr[index] = value;
        return value;
    }

    // Push new element
    void push_back(int val) {

        if (length == cap) {

            // Double capacity
            cap = 2 * cap;

            int* temp = new int[cap];

            // Copy old elements
            for (int i = 0; i < length; i++) {
                temp[i] = arr[i];
            }

            // Delete old array
            delete[] arr;

            // Point arr to new array
            arr = temp;
        }

        arr[length] = val;
        length++;
    }

    // Print vector
    void print() {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }

        cout << endl;
    }
};

int main() {

    MyVector vec1(5, -1);

    vec1.print();

    cout << y << "Size of array: "
         << reset << vec1.size()
         << y << " Capacity: "
         << reset << vec1.capacity()
         << endl;

    vec1.pop_back();
    vec1.print();

    cout << y << "Size of array: "
         << reset << vec1.size()
         << y << " Capacity: "
         << reset << vec1.capacity()
         << endl;

    vec1.push_back(23);
    vec1.print();

    cout << y << "Size of array: "
         << reset << vec1.size()
         << y << " Capacity: "
         << reset << vec1.capacity()
         << endl;

    vec1.push_back(24);
    vec1.print();

    cout << y << "Size of array: "
         << reset << vec1.size()
         << y << " Capacity: "
         << reset << vec1.capacity()
         << endl;

    cout << "get() function: "
         << vec1.get(5)
         << endl;

    vec1.set(0, 10);
    vec1.print();

    return 0;
}