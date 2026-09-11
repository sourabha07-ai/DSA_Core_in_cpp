#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,40};
    int size_of_array = size(arr);
    int sum = 0,avg;

    for(int i = 0; i< size_of_array; i++){
        sum += arr[i];
    }
    avg = sum / size_of_array;
    cout << "Average of Array: "<<avg <<endl;

}