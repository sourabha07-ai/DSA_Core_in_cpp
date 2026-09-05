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
        vector<int> arr = {4, -2, 7, -5, 3, -1};
        cout <<"array: ";print(arr);
        int n = arr.size();

        cout <<"Negative sorted array: ";
        for(int i = 0; i < n  - 1; i++){
                bool swapped = false;
                 for(int j = 0; j < n - 1 - i; j++){
                        if(arr[j] >= 0 && arr[j + 1] < 0){
                           swap(arr[j],arr[j+1]);
                           swapped = true;
                        }
                 }
                 if(!swapped)  break;
        }

        print(arr);

  
    return 0;
}