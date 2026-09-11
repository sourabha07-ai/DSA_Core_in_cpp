/*
Given an array and a target integer T , count how many elements in the array are strictly
less than T .
Constraints: 1 ≤N ≤105, −109≤arr[i], T ≤109.
Sample Input: arr = {5, 2, 8, 1, 9}, T = 6 ⇒ Output: 3 (Elements 5, 2, 1)
*/

#include <iostream>
#include <vector>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int checkTarget(vector<int>& arr,int target){
    int count = 0;
    cout <<"Number of elements less than " << target <<": ";
    for(int n:arr){
        if(n < target) {
            cout <<g << n <<" " <<reset;
            count++;
        }
    }
    return count;
}

int main(){
    vector<int> vec = {5,2,3,1,8,7,6};
    cout<<"Present array: ";
    for(int v:vec) cout <<v <<" ";
    
    cout <<endl;

    int target;
    cout <<"Enter target number: ";
    cin >> target;
    
    int result = checkTarget(vec,target);
    cout <<endl;
    cout << "Number of elements less than " << target
         << " = " <<y << result <<reset << endl;
   
    
}