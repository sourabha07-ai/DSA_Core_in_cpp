#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
    vector<int> vec = {15,65,32,21,11,23,43,56,0,12,1,-21,43};
    cout <<"Unsorted array: ";
    print(vec);
    cout<<endl;

    cout <<"Bubble Sort: ";
    int size_arr =vec.size();
    for(int i = 0;i < size_arr -1;i++){
      bool swapped = false;
      for(int j = 0; j < size_arr - 1 -i;j++){
        if(vec[j] > vec[j + 1]){
            swap(vec[j], vec[j+1]);
            swapped = true;
        }
      }
      if(!swapped) break;
    }
    print(vec);


}