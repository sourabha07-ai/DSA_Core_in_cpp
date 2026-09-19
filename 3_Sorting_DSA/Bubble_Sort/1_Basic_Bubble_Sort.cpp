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
        vector<int> arr = {5, 3, 8, 4, 2};
        cout <<"Unsorted array: ";print(arr);
       
        cout <<"Sorted array: ";
        int n = arr.size();
        for(int i = 0;i<n -1;i++){
           bool swapped = false;
             for(int j = 0; j < n-1 - i;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped = true;    
                }
             }
             if(!swapped) break;
        }
    print(arr);
         
}