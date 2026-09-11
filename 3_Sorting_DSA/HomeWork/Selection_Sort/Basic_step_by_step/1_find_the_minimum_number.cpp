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
       vector<int> arr = {8, 3, 6, 9,1, 2};
       cout <<"array::";print(arr);
       int min = INT_MAX;
       int minIndex  = -1;

       for(int i = 0; i < arr.size();i++){
        if(arr[i] < min){
             min = arr[i];
             minIndex  = i;

        }
       }
    cout<<"Minimum value: "<<min<<endl;
    cout<<"Minimum value-Index: "<<minIndex<<endl;
 }