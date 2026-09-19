#include <iostream>
#include <vector>
using namespace std; 
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
        vector<int> arr = {10, 4, 7, 2, 9, 1};
        cout <<"array: ";print(arr);

        size_t n = arr.size();
        for(int i = 0; i < n - 1; i++){
                int mxIndex = i;
                for(int j = i + 1; j < n;j++){
                        if(arr[j] > arr[mxIndex]){
                                mxIndex = j;
                        }
                }
                swap(arr[mxIndex],arr[i]);
        }
        cout <<"Desending Order: ";print(arr);

  
    return 0;
}