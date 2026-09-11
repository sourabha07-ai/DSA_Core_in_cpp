/*
First Repeated Element. Given an array of size N , find the first element from the
left that appears more than once in the array. If no element repeats, print -1.
Constraints: 1 ≤N ≤105, 0 ≤arr[i] ≤105.
Sample Input: N = 7, arr = {10, 5, 3, 4, 3, 5, 6} ⇒ Output: 5
Explanation: Both 5 and 3 are repeated, but traversing from the left, 5 is the first element we
encounter that will be repeated later.
*/
// #include <iostream>
// #include <vector>
// using namespace std;
// #define g "\033[32m"
// #define y "\033[33m"
// #define reset "\033[0m"


// void checkRepeatNumber(vector<int>& arr,int n){
//     for(int i = 0; i <n; i++){
//         for(int j = i+1; j < n; j++){
//             if(arr[i] == arr[j]){
//                cout <<g <<"First Repeat Number: " <<reset << arr[i];
//                 return;
//             }
//         }
//     }
// }


// int main(){
//    int n ;
//    cout <<"Enter size of array: ";
//    cin >> n;
   
//    vector<int> vec(n);
//    for(int i = 0; i < n;i++){
//        cout <<"Enter " <<i <<" index: ";
//        cin >> vec[i];
//    }
//    cout <<endl;
//    cout <<"Your array is : ";
//    for(int a:vec) cout <<a <<" ";

//    cout <<endl;

//     checkRepeatNumber(vec,n);
   
//   return 0;
// }


 //? second method 

  #include <iostream>
#include <vector>
using namespace std;

void checkRepeatNumber(vector<int>& arr, int n) {

    // Store frequency of each number
    vector<int> frequency(100001, 0);

    // Step 1: Count frequency
    for(int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }

    // Step 2: Traverse from left
    for(int i = 0; i < n; i++) {

        if(frequency[arr[i]] > 1) {
            cout << "First repeated element: " << arr[i];
            return;
        }
    }

    cout << "First repeated element: -1";
}

int main() {

    int n;

    cout << "Enter size of array: ";
    cin >> n;

    vector<int> vec(n);

    for(int i = 0; i < n; i++) {
        cout << "Enter " << i << " index: ";
        cin >> vec[i];
    }

    cout << "\nYour array is: ";

    for(int a : vec) {
        cout << a << " ";
    }

    cout << endl;

    checkRepeatNumber(vec, n);

    return 0;
}