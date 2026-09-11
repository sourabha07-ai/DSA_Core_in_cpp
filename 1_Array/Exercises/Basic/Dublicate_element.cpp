 #include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 10, 30, 10, 20, 30};

    int n = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Duplicate elements: ";

    for (int i = 0; i < n; i++) {
        bool alreadyPrinted = false;

         
        for (int k = 0; k < i; k++) {
            if (numbers[i] == numbers[k]) {
                alreadyPrinted = true;
                break;
            }
        }

        int count = 0;

        for (int j = 0; j < n; j++) {
            if (numbers[i] == numbers[j]) {
                count++;
            }
        }

         
        if (count > 1 && !alreadyPrinted) {
            cout << numbers[i] << " ";
        }
    }

    return 0;
}
 
