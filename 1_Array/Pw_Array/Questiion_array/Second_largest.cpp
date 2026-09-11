#include <iostream>
using namespace std;

int main(){
    int arr1[] = {32,32,32,32,32}; 
    int size_arr = size(arr1);

    int mx = INT_MIN;
    for(int i = 0;i< size_arr;i++){
        if(arr1[i] > mx) mx = arr1[i];
    }
    int second_max = INT_MIN;
    for(int i = 0; i < size_arr;i++){
        if(arr1[i] > second_max && arr1[i] != mx){
            second_max = arr1[i];
        }
    }

   cout <<"max: " <<mx <<endl;
   cout <<"Second max: " <<second_max <<endl;
}