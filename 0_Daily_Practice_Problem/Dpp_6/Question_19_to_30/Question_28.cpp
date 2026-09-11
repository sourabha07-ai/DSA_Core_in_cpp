/*
Absolute Difference of Sums. Calculate the sum of elements at even indices and
the sum of elements at odd indices in the array.
Output the absolute difference between these two sums.
Constraints: 1 ≤ N ≤ 105, −104 ≤ arr[i] ≤ 104.
Sample Input: arr = {10, 5, 20, 15} ⇒ Output: 10
Explanation: Even indices sum = 10 + 20 = 30. Odd indices sum = 5 + 15 = 20.
Difference = |30 −20| = 10.

*/
#include <iostream>
#include <vector>
using namespace std;

void Difference(vector<int> &arr)
{
    int evenIndex_sum = 0, oddIndex_sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (i % 2 == 0)
        {
            evenIndex_sum = evenIndex_sum + arr[i];
        }
        else
        {
            oddIndex_sum = oddIndex_sum + arr[i];
        }
    }
    int dif = evenIndex_sum - oddIndex_sum;
    cout << "Difference = " << abs(dif) << endl;
}

int main()
{
    vector<int> arr = {10, 5, 20, 15};
    cout << "Your array: ";
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    Difference(arr);
}