#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void print(vector<int> & arr){
        for(int i : arr){
           cout << i <<" ";
        }
        cout <<endl;
}
 
void sortedVector(vector<int>& arr){
        cout <<"Sorted array: ";
        int arr_size = arr.size();    
        for(int i = 0; i < arr_size - 1;i++){
             for(int j = 0;j < arr_size - 1 - i;j++){
                if(arr[j] > arr[j + 1]){
                        swap(arr[j],arr[j + 1]);
                }
             }  
        }
        print(arr);

}
int main(){
     vector<int> vec_1 = {12,43,65,75,78,22,15};
     cout <<"My array is: ";
     print(vec_1);

     sortedVector(vec_1);


}