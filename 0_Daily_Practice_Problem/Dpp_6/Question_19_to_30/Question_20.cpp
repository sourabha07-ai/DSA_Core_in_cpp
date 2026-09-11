/*Complex Array Rotation. Given an array of size N, first right-rotate the array by X
positions, and then left-rotate the resulting array by Y positions. Write an optimal O(N) 
approach.
Constraints: 1 ≤ N ≤ 105, 0 ≤ X,Y ≤ 109, −109 ≤ arr[i] ≤ 109.
Sample Input: N = 5, arr = {1, 2, 3, 4, 5}, X = 2, Y = 1
Sample Output: {5, 1, 2, 3, 4}
Explanation: Right by 2 gives {4, 5, 1, 2, 3}. Then left by 1 gives 
{5, 1, 2, 3, 4}.
*/
#include <iostream>
#include<vector>
using namespace std;

#define g "\033[32m"
#define yellow "\033[33m"
#define reset "\033[0m"

void reverseArray(vector<int>&arr,int start,int end){
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}


int main(){
    int n;
    cout <<"Enter size of array: ";
    cin >> n;

     if(n==0){
        return 0;
    }

    vector<int> arr(n);
    for(int i = 0; i < n;i++){
        cout <<"Enter " <<i <<" index: ";
        cin >> arr[i];
    }
    cout <<"original array: ";
    for(int a:arr){
        cout <<a <<" ";
    }
    
    cout <<endl;

    long long x,y;
    cout <<"first right-rotate the array by X: ";
    cin >>x;
    cout <<"left-rotate the resulting array by Y: ";
    cin >> y;

    long long k = (x - y) % n;
    if( k < 0){
       k = k + n;
    }
     
    reverseArray(arr,0,n-1);
    reverseArray(arr,0,(int)k-1);
    reverseArray(arr,(int)k,n-1);

    cout <<endl;
    cout <<yellow <<"rotate array: "<<reset;
    for(int a: arr){
        cout <<a <<" ";
    }
    cout <<endl;
    
    return 0;

}