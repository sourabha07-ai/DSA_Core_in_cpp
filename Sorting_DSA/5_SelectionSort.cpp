#include<iostream>
#include<vector>
using namespace std;

#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"

void print(vector<int>& arr){
    for(int a:arr){
        cout <<a <<" ";
    }
   cout <<endl;
}

int main(){
    vector<int> arr = {7,4,9,1,3,6,2,5};
    int n = arr.size();
    cout <<y <<"Original array: " <<reset;
    print(arr);

    cout <<y <<"Sorted array: " <<reset;
    for(int j = 0; j < n-1; j++){
     int minimum_number = arr[j],minimum_index = j;
     for(int i = j; i < n; i++){
        if(arr[i] < minimum_number ){
            minimum_number = arr[i];
            minimum_index = i;               
            }
        } 
        swap(arr[j],arr[minimum_index]);
    }
            
    print(arr);
    
}