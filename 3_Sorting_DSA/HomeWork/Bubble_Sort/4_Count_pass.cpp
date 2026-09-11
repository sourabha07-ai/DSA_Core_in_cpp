#include <iostream>
#include <vector>
using namespace std; 
void print(const vector<int>& arr){

     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int countPasses(vector<int> arr){
     int n = arr.size();
     int passes = 0;
     for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - 1 - i;j++){
           if(arr[j] > arr[j+1]){
             swap(arr[j],arr[j+1]);
             swapped = true;
           }
        }
        passes++;
        if(!swapped) break;
     }
  return passes;

}

int main(){
        vector<int> arr = {1, 2, 3, 5, 4};
        cout <<"Unsorted array: ";print(arr);

        int count_pass = countPasses(arr);
        cout<<"Number of passes: " <<count_pass <<endl;
  
    return 0;
}