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

    //! step-1: Declare 2 Sorted Array
    vector<int> arr1 = {3,4,5,7};
    vector<int> arr2 = {1,1,2,4,6};
    cout<<"array: ";print(arr1);
    cout<<"array: ";print(arr2);

    //! Step:2 Create 
    vector<int> combined;
    for(int a:arr1){
      combined.push_back(a);
    }
    for(int b:arr2){
      combined.push_back(b);
    }
  
    cout<<"Combined array: ";
    print(combined);

    size_t n = combined.size();
    for(int i = 1;i < n; i++){
      int key = combined[i];
      int j = i - 1;
        while(j >= 0 && combined[j] > key){
           combined[j + 1] = combined[j];
           j--;
        }
        combined[j + 1] = key;
    }
     cout<<"Sorted array: ";print(combined);

  
    return 0;
}