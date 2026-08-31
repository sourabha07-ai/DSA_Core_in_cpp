#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& arr){
    for(int a : arr){
        cout <<a <<" ";
    }
    cout <<endl;
}

int main(){
    vector<int> arr = {4,1,7,3,9,2,0,8};
    int n = arr.size();
    cout <<"Original array: ";
    print(arr);

    cout <<"Insertion Sort: ";
    for(int i = 1; i<=n-1;i++){
        int j = i;
            while(j >= 1 && arr[j] < arr[j-1]){
                swap(arr[j],arr[j-1]);
                j--;
        }
    }
    print(arr);

}