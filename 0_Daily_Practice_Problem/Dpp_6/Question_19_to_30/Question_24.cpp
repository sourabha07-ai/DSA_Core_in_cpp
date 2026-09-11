/*
Move all 0s to the end of the array while maintaining the relative order of the non-zero
elements.
Constraints: 1 ≤N ≤105, 0 ≤arr[i] ≤109.
Sample Input: arr = {0, 1, 0, 3, 12} ⇒ Output: {1, 3, 12, 0, 0}
*/
#include <iostream>
#include <vector>
using namespace std;

vector<int> arr_0s(vector<int>& arr){
    int n = arr.size();
    int nonZero = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] != 0){
            arr[nonZero] = arr[i];
            nonZero++;
        }  
    }
    // cout <<"print loop: ";
    // for(int p:arr) cout <<p <<" ";

    // cout <<"nonZero: "<< nonZero <<endl;

    while(nonZero < n){
        arr[nonZero] = 0;
        nonZero++;
    }
    // cout <<"Printed array: ";
    // for(int p:arr) cout <<p <<" ";

    return arr;
}

int main(){
  vector<int> vec = {0,1,0,3,12};
  cout <<"Original array: ";
  for(int v: vec) cout <<v <<" ";

  cout <<endl;

  vector<int> modified = arr_0s(vec);
  cout <<"Move all 0s to the end of the array : ";
   for(int m: modified) cout <<m <<" ";


}