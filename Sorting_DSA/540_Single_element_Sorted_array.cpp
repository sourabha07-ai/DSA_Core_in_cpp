#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
        for(int a: arr){
            cout << a<<" ";
        }
        cout <<endl;
}

int SingleElement(vector<int>& arr){
        int n = arr.size();
        int low_index = 0, high_index = n-1;

        if(n==1) return arr[0];
        if(arr[0] != arr[1]) return arr[0];
        if(arr[n-1] != arr[n-2])return arr[n-1];

        while(low_index <= high_index){
                int mid = low_index + (high_index -low_index)/2;
                if(arr[mid] != arr[mid - 1] && arr[mid] != arr[mid+1]) return arr[mid];
                int f = mid,s = mid;
                if(arr[mid] == arr[mid - 1]) f = mid -1;
                else s = mid + 1;
                if((f-low_index) % 2 == 1){
                        high_index = f - low_index;
                }else{
                        low_index = s + 1;
                }
        }
        return -1; 
}

int main(){
        vector<int> arr = {0,1,1,2,2,3,3,4,4,8,8};
        cout <<"your array: ";print(arr);
         
        
        int single_number = SingleElement(arr);
        cout <<"Single element is: " << single_number <<endl;



}