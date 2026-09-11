/*
Row-wise Strictly Increasing. Write a function that returns true if every row in a
given M × N matrix is strictly increasing from left to right, otherwise return false.
Constraints: 1 ≤ M, N ≤ 103
 −105 ≤ arr[i][j] ≤ 105

Sample Input: M = 2, N = 3, Matrix = {{1, 5, 9}, {2, 3, 4}}
Sample Output: true
*/

#include <iostream>
#include<vector>
using namespace std;

int main(){
    vector<vector<int>> arr = {{1, 5, 9}, {2, 3, 4}};
    cout <<"Your array is : "<<endl;
     for(int i = 0; i < arr.size();i++){
        for(int j = 0; j < arr[0].size();j++){
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
     }

    return 0;
}