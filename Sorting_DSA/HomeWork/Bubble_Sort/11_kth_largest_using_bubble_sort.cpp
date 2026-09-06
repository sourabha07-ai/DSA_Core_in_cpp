#include <iostream>
#include <vector>
using namespace std; 
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}


int kthLargest(vector<int>& arr, int k) {
    // your code
    int n = arr.size();
    for(int i = 0; i < n - 1; i++){
        bool swapped = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                swap(arr[j],arr[j + 1]);
                swapped = true;
            }
        }
       if(!swapped) break;
    }
    cout<<"Sorted array: ";
    print(arr);
    return arr[n-k];
}


int main(){
        vector<int> arr = {3,2,1,5,6,4};
        cout<<"your array: ";print(arr);

        int k;
        cout <<"Enter k: ";
        cin >> k;

         if (k < 1 || k > arr.size()) {
        cout << "Invalid k!" << endl;
        return 0;
         }

        int kth_Largest = kthLargest(arr,k);
        cout <<"Kth element is: "<<kth_Largest <<endl;



  
    return 0;
}