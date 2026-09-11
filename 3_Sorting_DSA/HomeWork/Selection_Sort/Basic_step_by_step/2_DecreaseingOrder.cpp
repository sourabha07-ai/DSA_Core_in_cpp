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
        vector<int> arr = {23,54,12,67,22,89,64};
        cout <<"Array: ";print(arr);

        int n = arr.size();
        for(int i = 0; i < n - 1;i++){
                int maxIndex = i;
                for(int j = i;j < n;j++){
                        if(arr[j] > arr[maxIndex]){
                                maxIndex = j;
                        }
                }
                swap(arr[i],arr[maxIndex]);

        }
        cout <<"Sorted decreasing array: ";print(arr);

}

