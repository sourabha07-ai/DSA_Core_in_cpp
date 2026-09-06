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
        vector<int> arr = {5, 1, 8, 2, 9, 3};
        cout <<"Array: ";print(arr);

        int n = arr.size();

        cout <<"Decreasing Order: ";
        for(int i = 0; i < n - 1; i++){
                bool swapped = false;
           for(int j = 0; j < n - 1 - i; j++){
                if(arr[j] < arr[j + 1]){
                   swap(arr[j], arr[j + 1]);
                   swapped = true;
                }
           }
           if(!swapped) break;
        }
        print(arr);


  
    return 0;
}