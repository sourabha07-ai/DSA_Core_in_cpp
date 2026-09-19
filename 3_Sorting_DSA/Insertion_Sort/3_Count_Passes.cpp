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
        cout<<"array: ";print(arr);
        
        size_t n = arr.size();
        int passes = 0;
        for(int i = 1; i < n ; i++){
            int j = i;
             while(j >= 1 && arr[j] < arr[j - 1]){
                  swap(arr[j],arr[j - 1]);
                  j--;
             }
              passes++;
        }
        cout <<"Sort Array: ";print(arr);
        cout <<"No.of passes: "<<passes <<endl;



    return 0;
}