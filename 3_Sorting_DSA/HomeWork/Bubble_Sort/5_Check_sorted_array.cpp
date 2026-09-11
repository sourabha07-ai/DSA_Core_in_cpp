#include <iostream>
#include <vector>
using namespace std; 
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

bool isSorted(vector<int> arr){
        int n = arr.size();
        for(int i = 0; i < n - 1; i++){
                if(arr[i] > arr[i+1]){
                   return false;
                }
        }
        return true;
}

int main(){
        vector<int> arr ={1,2,3,4,5,7};
        cout <<"your array: ";print(arr);

        bool is_sort = isSorted(arr);
        if(is_sort == true) cout <<"Sorted..." <<endl;
        else cout <<"Unsorted" <<endl;


  
    return 0;
}