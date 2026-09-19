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
        vector<int> arr = {12, 5, 8, 20, 3, 15};
        cout <<"Array: ";print(arr);

        int n = arr.size();

        for(int i = 0; i < n - 1; i++){
                bool swapped = false;
           for(int j = 0; j < n - 1 - i; j++){
                if(arr[j] > arr[j + 1]){
                   swap(arr[j], arr[j + 1]);
                   swapped = true;
                }
           }
           if(!swapped) break;
        }
      
         cout << "Second Largest element: " << arr[n - 2] << endl;


  
    return 0;
}