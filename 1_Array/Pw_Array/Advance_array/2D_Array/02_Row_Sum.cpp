#include<iostream>
using namespace std;

int main(){
    int arr[][4] = {
        {10,12,5,7},
        {9,6,4,2},
        {1,10,29,5},
        {10,20,30,40}
    };
     
    for(int i = 0;i < size(arr);i++){
        int Rowsum = 0;   
        for(int j = 0; j < 4; j++){
            Rowsum += arr[i][j];     
        }
        cout <<"Row " <<i <<" Sum : "<<Rowsum <<endl;
    }
    return 0;
}