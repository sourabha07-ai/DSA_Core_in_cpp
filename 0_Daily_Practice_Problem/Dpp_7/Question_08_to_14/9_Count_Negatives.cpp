
// Q9. Count Negatives. Given an M ×N matrix which is sorted in non-increasing order both
// row-wise and column-wise, count the number of negative numbers. Find an optimal approach
// that runs in O(M + N ) time complexity.
// Constraints: 1 ≤M, N ≤104, −105≤arr[i][j] ≤105.
// Sample Input: {{4, 3, 2, -1}, {3, 2, 1, -1}, {1, 1, -1, -2}, {-1, -1, -2, -3}}
// Sample Output: 8

#include <iostream>
#include <vector>
using namespace std;

int countNegatives(vector<vector<int>> &arr){
    int m = arr.size();
    int n = arr[0].size();

    int row = 0;
    int col = n - 1;
    int count = 0;

    while (row < m && col >= 0){
        if (arr[row][col] < 0){
            count += m - row;
            col--;
        }
        else{
            row++;
        }
    }

    return count;
}

int main(){
    int m, n;
    cout << "Enter rows: ";
    cin >> m;
    cout << "Enter cloumn: ";
    cin >> n;

    vector<vector<int>> arr(m, vector<int>(n));

    cout << "Enter matrix elements:\n";

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout <<"Enter-" <<i <<j <<" index: ";
            cin >> arr[i][j];
        };
    };
    cout <<"matrix is: "<<endl;

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout <<arr[i][j] <<" ";
        }
        cout <<endl;
    };



    cout << "Number of negative numbers: "
         << countNegatives(arr) << endl;

    return 0;
}
