#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}


int main(){
    vector<int> arr = {7,4,9,1,3,6,2,5};
    cout<<"Unsorted array: ";print(arr);

    cout <<"SelectionSort array: ";
    int n = arr.size();
    for(int j = 0; j < n - 1; j++){
      int minimum = arr[j];
      int min_idx = j;
         for(int i = j; i < n; i++){
            if(arr[i] < minimum){
               minimum = arr[i];
               min_idx = i;
            }
         }
         swap(arr[j],arr[min_idx]);
    }
    print(arr);
    

}