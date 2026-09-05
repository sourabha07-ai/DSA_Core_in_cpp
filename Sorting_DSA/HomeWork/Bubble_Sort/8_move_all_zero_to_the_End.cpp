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
        vector<int> arr = {0, 1, 0, 3, 12};
        cout <<"Array: ";print(arr);

        cout <<"All zero to the end: ";
        int n = arr.size();
        for(int i = 0; i < n - 1; i++){
           bool swapped = false;
             for(int j = 0; j < n - 1 - i;j++){
                 if(arr[j] == 0 and arr[j + 1] != 0 ){
                        swap(arr[j], arr[j + 1]);
                        swapped = true;
                 }
             }
             if(!swapped) break;
        }
        print(arr);
  
    return 0;
}