#include<iostream>
using namespace std;

void updateArray(int arr[]){
    arr[0] = 100;
}

int main(){
    int arr[] = {1,2,3};
    updateArray(arr);
    cout << arr[0];

}