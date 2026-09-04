#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void print(vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
     vector<int> arr = {1,0,32,10,3,0,1,0,1,34,0};
     cout<<"array: ";
     print(arr);

     cout <<"Move all Zero to End: ";
     int n = arr.size();
     for(int i = 0; i < n - 1;i++){
        bool swapped = false;
         for(int j = 0; j < n - 1 -i;j++){
           if(arr[j] == 0 &&  arr[j + 1] != 0){
              swap(arr[j],arr[j+1]);
              swapped = true;
        }
    }
        if(!swapped) break;
     }
     print(arr);

}