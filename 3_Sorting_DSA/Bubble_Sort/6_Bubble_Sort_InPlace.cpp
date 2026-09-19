#include <iostream>
#include <vector>
using namespace std; 
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

void bubbleSort(vector<int>& arr){
      int n = arr.size();
      cout <<"Sorted array: ";
      for(int i = 0; i < n - 1; i++){
        bool swapped = false;
         for(int j = 0; j < n - 1 - i; j++){
             if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
             }
         }
         if(!swapped) break;
      }
    print(arr);
}

int main(){
        vector<int> arr = {9, 3, 7, 1, 5};
        cout <<"Unsorted array: ";print(arr);

        bubbleSort(arr);

  
    return 0;
}