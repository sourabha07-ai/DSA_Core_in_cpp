#include<iostream>
#include<vector>
using namespace std;
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
        vector<int> arr = {2,4,6,8,9,7,5,3,1};
        cout<<"Unsort array: ";print(arr);

        size_t n = arr.size();
        for(int i = 1;i < n; i++){
                int key = arr[i];
                 int j = i - 1;
                  while(j >= 0 && arr[j]>key){
                        arr[j + 1] = arr[j];
                        j--;
                  }
                  arr[j + 1] = key;
        }
        cout<<"Sorted array: ";print(arr);

}