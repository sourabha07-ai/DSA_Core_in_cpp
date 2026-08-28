#include <iostream>
#include <vector>
using namespace std; 

bool CheckSort( vector<int>&arr ){
      for(int i = 0; i < arr.size();i++){
        if(arr[i] > arr[i+1]){
            return false;
        }
      }
      return true;
}

int main(){
    vector<int> vec = {1,2,3,4,6,5,7,8};
    cout <<"my array is: ";
    for(int i = 0; i < vec.size();i++){
         cout <<vec[i] <<" ";
    }cout << endl;

    cout << boolalpha;
    bool check = CheckSort(vec);
    cout <<check <<endl;

}