#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void print(vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
      vector<int> arr = {12,32,11,10,6,5,13,30,1};
      cout <<"Unsorted array: ";
      print(arr);
      
      int n = arr.size();
      for(int i = 0; i < n -1; i++){
        bool swapped = false;
        for(int j = 0; j< n - 1 - i;j++){
           if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
           } 
        }
        cout <<"after swap: " <<i + 1 <<": ";
        print(arr);
        if(!swapped) break;
      }
      cout << "Sorted array: ";
      print(arr);
}