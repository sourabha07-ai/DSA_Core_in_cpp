#include<iostream>
using namespace std;

int main(){
    // int arr[4];
    // cout <<arr[0]; //Garbege value

    int n;
    cout <<"Enter Size of array: ";
    cin >>n;
    int arr[n];

    for(int i = 0; i <= n-1;i++){
        cout <<"Enter " <<i+1 <<": ";
        cin >>arr[i]; 
    }
    cout <<endl;
    cout <<"array is: ";
    
    for(int num : arr){
        cout <<num <<" ";
    }

    return 0;
}