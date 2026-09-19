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
        vector<int> arr = {4,2,6,1,8,5,3,7,9};
        cout <<"Array: ";print(arr);

        //Size of array
        size_t n = arr.size();
        for(int i = 1; i < n-1; i++){
             int j = i;
               while(j >= 1 && arr[j] < arr[j - 1]){
                  swap(arr[j],arr[j - 1]);
                  j--;
               }   
        }
        cout <<"Insertion Sort array: ";print(arr);

   
}