/* 
Minimum Absolute Difference. Find the minimum absolute difference between 
any two adjacent elements in the given array.
Constraints: 2 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109.
Sample Input: arr = {10, 20, 15, 30, 28} ⇒ Output: 2
Explanation: Differences: |10 − 20| = 10, |20 − 15| = 5, |15 − 30| = 15, 
|30 − 28| = 2. The minimum is 2.
*/
#include <iostream>
#include <vector>
#include<cstdlib>
using namespace std;

void  Difference(vector<int>& arr){
    int diff;
    int min_value = INT_MAX;
    int n = arr.size();
    for(int i = 0; i < n;i++){
        if(i < n-1){
            diff = abs(arr[i] - arr[i+1]);
            if(diff < min_value){
                min_value = diff;
            }
        }
    }
     cout << "The minimum is " <<min_value <<endl; 

}

int main(){
   vector<int> arr = {10, 20, 15, 30, 28};
    cout << "Your array: ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

     Difference(arr);

    return 0;
}