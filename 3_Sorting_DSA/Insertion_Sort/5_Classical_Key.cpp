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
        vector<int> arr = {12,16,14,11,10,13,15};
        cout <<"array :";print(arr);

        //Size of array
        size_t n = arr.size();
        
        for(int i = 1; i < n ;i++){
                int key = arr[i];
                int j = i - 1;
                while(j >= 0 && arr[j] > key){
                        arr[j + 1] = arr[j];
                        j--;
                }
                arr[j + 1] = key;
        }
    cout <<"Sorted array: ";print(arr);
      

}