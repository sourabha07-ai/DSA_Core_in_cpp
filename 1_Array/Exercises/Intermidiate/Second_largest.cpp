#include <iostream>
using namespace std;

int main(){
    int arr[] = {12,13,14,15,16};
    int n = size(arr);
    int mx = INT_MIN;

    if(n < 2){
        cout <<"Second-largest element does not exist" <<endl;
        return 0;
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > mx){
            mx = arr[i];
        }
    }
    cout <<"Maximum Element: " <<mx <<endl;

    int smx = INT_MIN;
    for(int i = 0; i < n ; i++){
        if(arr[i] > smx &&  arr[i] < mx){
            smx = arr[i];
        }
    }
    cout <<"Second largest: " <<smx <<endl;
}