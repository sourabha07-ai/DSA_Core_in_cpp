#include<iostream>
#include<algorithm>
#include <vector>
using namespace std;
void print(vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
     vector<int> arr = {2,0,0,2,0,1,6,8,5,0,0};
     cout <<"array :";
     print(arr);  
     
     cout <<"Optimal Soution: ";
     int n = arr.size();
     int j = 0;

     for(int i = 0; i < n ; i++){
        if(arr[i] != 0){
          swap(arr[i],arr[j]);
          j++;
        }
     }
     print(arr);

     
}