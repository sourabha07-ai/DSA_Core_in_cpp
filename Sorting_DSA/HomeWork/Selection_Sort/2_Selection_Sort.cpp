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
        vector<int> arr = {23,54,12,67,22,89,64};
        cout <<"Unsorted array: ";print(arr);

        cout <<"Selection Sort: ";
        int n  = arr.size();
        for(int i = 0; i < n - 1; i++){
                int minIndex = i;
                for(int j = i + 1; j < n ;j++){
                        if(arr[j] < arr[minIndex]){
                                minIndex = j;
                        }
                }
                swap(arr[minIndex], arr[i]);
        }

        print(arr);

}