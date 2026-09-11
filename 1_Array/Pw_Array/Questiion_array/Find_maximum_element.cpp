#include <iostream>
using namespace std;

int main(){
    int arr[] = {1-6,-14,-18,-10,-10,-20};
    int size_of_arr = sizeof(arr)/4;

    int mx = INT_MIN; //! Smallest integer

    for(int i = 0; i < size_of_arr ; i++){
        // if( arr[i] > mx) mx = arr[i];
        mx = max(mx,arr[i]);
    }
    cout <<"maximum Number: " <<mx;
}