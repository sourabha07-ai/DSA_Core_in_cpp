/*Find the Third Maximum element in a given array.
Constraints: 3 ≤ N ≤ 105, −109 ≤ arr[i] ≤ 109. You are not allowed to sort the array.
Sample Input: N = 5, arr = {4, 1, 9, 7, 2} ⇒ Sample Output: 4
Explanation: The max is 9, second max is 7, third max is 4.
*/

#include <iostream>
#include<climits>
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

 
using namespace std;

int main(){
    int n;
    cout << "Enter Size of Array: ";
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cout << "Enter " << i << " index: ";
        cin >> arr[i];
    }
    
    for(int a:arr){
        cout <<g << a <<" " <<reset;
    }
    cout <<endl;

    int first_max_ele = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > first_max_ele){
            first_max_ele = arr[i];
        }
    }
    cout <<y << "Maximum Element in array: " <<reset << first_max_ele << endl;

    int second_max_ele = INT_MIN;
    for (int i = 0; i < n; i++){
        if (arr[i] > second_max_ele && arr[i] != first_max_ele){
            second_max_ele = arr[i];
        }
    }
    cout <<y <<"Second Max Element: " <<reset <<second_max_ele <<endl;
    
    int third_max_ele = INT_MIN;
    for(int i = 0;i < n; i++){
        if(arr[i] > third_max_ele && arr[i] != first_max_ele && arr[i] != second_max_ele){
            third_max_ele = arr[i];
        }
    }
    cout <<y <<"Third Max element: " <<reset <<third_max_ele <<endl;
     
}