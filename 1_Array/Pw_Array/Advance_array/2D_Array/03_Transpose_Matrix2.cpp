
#include<iostream>
using namespace std;
int main(){
    int arr[][4]= {
        {10,20,30,40},
        {50,60,70,80},
        {90,10,11,12}
    };
    cout <<"Original array: "<<endl;
    for(int i = 0 ; i< size(arr);i++){
        for(int j = 0; j < size(arr[0]);j++){
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }
     
    cout <<"Transpose Matrix: "<<endl;
    for(int i = 0 ; i< size(arr[0]);i++){
        for(int j = 0; j < size(arr);j++){
            cout << arr[j][i] <<" ";
        }
        cout <<endl;
    }











    
}