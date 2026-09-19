#include<iostream>
#include<vector>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
    vector<int> arr = {8,4,1,3,6,9,5,2,7};
    cout <<g<<"array: "<<reset;print(arr);


    size_t n = arr.size();
    for(int i = 0; i < n - 1; i++){
        int j = i;
         while(j >= 1 && arr[j] < arr[j - 1]){
                swap(arr[j],arr[j - 1]);
                j--;
         }
    }
    cout<<y<<"Insertion Sort: "<<reset;
    cout<<g;print(arr);cout<<reset;
    
        
}