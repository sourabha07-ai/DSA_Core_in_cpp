#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,3,40,50};
    int n = size(arr);

    int smallest = arr[0];
    int largest = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    cout <<"Smallest Element: " <<smallest <<endl;
    cout <<"largest Element: " <<largest <<endl;
}

