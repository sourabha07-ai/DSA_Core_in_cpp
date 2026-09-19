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
         vector<int> arr = {23, 54, 12, 67, 22, 89, 64};
         print(arr);

         int n = arr.size();

         for(int i = n - 1; i > 0;i-- ){
              int maxIndex = i;
              for(int j = 0; j < i;j++){
                 if(arr[j] > arr[maxIndex]){
                        maxIndex = j;
                 }
              }  
              swap(arr[i],arr[maxIndex]);
         }
         print(arr);
  
    return 0;
}