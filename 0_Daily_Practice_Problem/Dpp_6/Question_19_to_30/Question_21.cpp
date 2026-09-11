/*
Check if an array is strictly sorted in non-increasing order. Return true if every 
element is less than or equal to the previous element, else false.
Constraints: 1 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109.
Sample Input 1: {8, 5, 5, 2} ⇒ Output: true
Sample Input 2: {4, 2, 8} ⇒ Output: false
*/

#include<iostream>
#include <vector>
using namespace std;

bool checkArray(vector<int>&arr){
    int n = arr.size();
    
      for(int i = 1; i < n ;i++){ 
        if(arr[i] > arr[i-1]){
            return false;
        } 
        }
    return true;
}

int main(){
    vector<int> arr = {8, 5, 5, 2};
  bool output = checkArray(arr);
   cout <<boolalpha;
  cout << output <<endl;
    
    return 0;

}