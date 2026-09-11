/*
Count the number of Even and Odd numbers in a given array.
Constraints: 1 ≤ N ≤ 105, 0 ≤ arr[i] ≤ 109.
Sample Input: arr = {1, 2, 3, 4, 5, 8} ⇒ Output: Even: 3, Odd: 3
*/

#include <iostream>
#include<vector>
using namespace std;

void CountEvenOdd(vector<int>& arr){
    int n = arr.size();
    int evenCount = 0,oddCount=0;

    for(int a:arr){
        if(a % 2 == 0){
            evenCount++;
        }else{
            oddCount++;
        }
    }
    cout <<"Even: " <<evenCount <<"," <<"Odd: " <<oddCount <<endl;
}

int main(){

    vector<int> arr = {1, 2, 3, 4, 5, 8};
    cout <<"Your array: ";
    for(int a: arr) cout <<a <<" ";
    cout <<endl;

    CountEvenOdd(arr);


    return 0;
}
