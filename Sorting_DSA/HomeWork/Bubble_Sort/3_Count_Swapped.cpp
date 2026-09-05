#include <iostream>
#include <vector>
using namespace std; 
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int countSwaps(vector<int>& arr){
        int n = arr.size();
        int count = 0;
        for(int i = 0; i < n - 1; i++){
                for(int j = 0; j < n - 1 - i;j++){
                if(arr[j] > arr[j + 1]){
                   swap(arr[j],arr[j+1]);
                   count++;
                }
        }
   }
   return count;
}

int main(){
        vector<int> arr = {5, 1, 4, 2, 8};
        cout <<"Unsorted array: "; print(arr);

        int no_of_swapped = countSwaps(arr);
        cout <<"No. of swapped is: " <<no_of_swapped <<endl;
  
    return 0;
}