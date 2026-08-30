#include <iostream>
#include <vector>
using namespace std;
void print(vector<int>&arr){
    for(int i : arr){
        cout << i <<" ";
    }
    cout <<endl;
}

int main(){
    vector<int> arr1  = {9,-2,0,0,-4,6,0,7,0};
    cout <<"My array is: ";
    print(arr1);

    int n = arr1.size();
    cout <<"Sort array is : ";
    for(int i = 0; i < n-1;i++){
        for(int j = 0; j < n-1-i;j++){
            if(arr1[j] == 0){
                 swap(arr1[j],arr1[j+1]);
            }
        }
    }
    print(arr1);
}