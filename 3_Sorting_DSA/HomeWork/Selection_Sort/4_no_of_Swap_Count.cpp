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
        vector<int> arr = {5, 3, 4, 1, 2};
        cout <<"array: ";print(arr);

        size_t n = arr.size();
        int SwapCount = 0;
        for(int i = 0;i < n - 1;i++){
             int minIndex = i;
             for(int j = i + 1; j < n;j++){
                   if(arr[j] < arr[minIndex]){
                        minIndex = j;
                   }
             }
             if(minIndex != i){
                  swap(arr[minIndex],arr[i]);
                  SwapCount++;
             }
             
        }
        cout <<"Sorted array: ";print(arr);
        cout <<"Number of Swap: "<<SwapCount<<endl;
  
    return 0;
}