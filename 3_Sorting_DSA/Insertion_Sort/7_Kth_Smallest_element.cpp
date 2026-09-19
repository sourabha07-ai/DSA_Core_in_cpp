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
        vector<int> arr = {93,17,4,64,46,18,3,61};
        cout <<"Unsorted array: ";print(arr);

        //Size of array
        size_t n = arr.size();
        int k = 3;
        for(int i = 1; i < n; i++){
                int key = arr[i];
                int j = i - 1;
                while(j >= 0 && arr[j] > key){
                        arr[j+1] = arr[j];
                        j--;
                }
                arr[j + 1] = key;
        }
        cout <<"Sorted array: ";print(arr);
        cout <<"Kth smallest element is arr["<<k<<"] = "<<arr[k-1]<<endl; 

  
    return 0;
}