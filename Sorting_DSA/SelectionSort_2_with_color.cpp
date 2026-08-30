#include<iostream>
#include<vector>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

void print(vector<int>& arr, int index1 = -1, int index2 = -1){
    for(int i = 0; i < arr.size(); i++){
        if(i == index1 || i == index2)
            cout << g << arr[i] << reset << " ";
        else
            cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    vector<int> arr = {7,4,9,1,3,6,2,5};
    int n = arr.size();

    cout << y << "Original array: " << reset;
    print(arr);

    int minimum_number = arr[0];
    int minimum_index = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] < minimum_number){
            minimum_number = arr[i];
            minimum_index = i;
        }
    }

    cout << y << "Before swap: " << reset;
    print(arr, 0, minimum_index);

    swap(arr[0], arr[minimum_index]);

    cout << y << "After swap:  " << reset;
    print(arr, 0, minimum_index);
}