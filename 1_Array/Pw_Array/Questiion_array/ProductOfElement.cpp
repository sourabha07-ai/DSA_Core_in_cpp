#include <iostream>
using namespace std;

int main(){
    int n;
    cout <<"Enter the Size of array: ";
    cin >> n;
    
    int arr[n];
    double mul_element = 1;

    for(int i = 0;i < n;i++){
        cout <<"Enter " <<i+1 <<": " ;
        cin >> arr[i];
        mul_element *= arr[i];
    }
    cout <<"Product of array: " <<mul_element<<endl;
}