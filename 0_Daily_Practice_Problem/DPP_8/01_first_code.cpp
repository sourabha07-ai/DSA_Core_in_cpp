#include <iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int i:arr){
        cout <<i <<" ";
    }
    cout <<endl;
}

void solve(){

}


int main(){
    vector<int> arr = {1,2,3,4,5,6,7,8,9};
    print(arr);

    cout <<"Sorted array: ";
    solve();
}