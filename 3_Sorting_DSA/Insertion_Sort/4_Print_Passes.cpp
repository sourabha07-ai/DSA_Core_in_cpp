#include <iostream>
#include <vector>
using namespace std;
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
} 

int main(){
        vector<int> arr = {7, 4, 5, 2, 6};
        // cout<<"array: ";print(arr);
        
        size_t n = arr.size();
        for(int i = 1; i < n ; i++){
            int j = i;
             while(j >= 1 && arr[j] < arr[j - 1]){
                  swap(arr[j],arr[j - 1]);
                  j--;
             }
              cout <<"Array: ";print(arr);
        }
        cout <<"Sort Array: ";print(arr);



    return 0;
}