/*
 Max Consecutive Ones. Given a binary array (containing only 0s and 1s),
find the maximum number of consecutive 1s in the array.
Constraints: 1 ≤ N ≤ 105, arr[i] ∈ {0,1}.
Sample Input: arr = {1, 1, 0, 1, 1, 1} ⇒ Output: 3
Explanation: The first two digits or the last three digits are consecutive 1s.
The maximum is 3.
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &arr, int n)
{
    int maxCount = 0;
    int currentCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            currentCount++;
            maxCount = max(maxCount, currentCount);
        }
        else
        {
            currentCount = 0;
        }
    }
    return maxCount;
}

int main()
{
    int n;
    cout <<"Enter size of array:(0 and 1) ";
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout <<"Array is: ";
    for(int a:arr) cout <<a <<" ";
    cout <<endl;

    cout <<"MaxConsecutiveOnes: " << findMaxConsecutiveOnes(arr, n) << endl;
}