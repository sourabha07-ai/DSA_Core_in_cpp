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
        vector<int> arr = {1, 2, 3, 5, 4};
        cout <<"Array: "; print(arr);


        cout <<"Sorted array: ";
        int n = arr.size();
        int count = 0;
        int passes = 0;
        for(int i = 0;i<n -1;i++){
           bool swapped = false;
             for(int j = 0; j < n-1 - i;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                    swapped = true; 
                    count++;   
                }
             }
             passes++;
             if(!swapped) break;

        }
    print(arr);
    cout <<"Swaps: " <<count <<endl;
    cout<<"Passes: " <<passes <<endl;
  
    return 0;
}