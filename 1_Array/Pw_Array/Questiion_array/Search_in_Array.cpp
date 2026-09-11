#include <iostream>
using namespace std;

int main()
// { //Method - 1
//     int nums[] = {12, 34, 21, -12, -24, 0, 90};
//     int size_nums = size(nums);

//     for (int i = 0; i < size_nums; i++){
//         if (nums[i] == 1){
//             cout << "Present in array." << endl;
//             break;
//         }
//     }
//     cout << "Not Present in array." << endl;
// }

{  //method -2
     int nums[] = {12, 34, 21, -12, -24, 0, 90};
     int size_nums = size(nums);

     int target = 21;
     bool flag = false ; //element not Present in array

     for(int i = 0; i < size_nums;i++){
        if(nums[i] == target){
            flag = true; //Element present in array
            break;
        }
     }
     if(flag == true) cout << "Element Found";
     else cout <<"Element not found!" <<endl;
  

}