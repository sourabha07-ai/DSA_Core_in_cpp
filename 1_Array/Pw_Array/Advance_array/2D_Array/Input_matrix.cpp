#include<iostream>
using namespace std;

int main(){
    int row,col;
    cout <<"Enter row: ";
    cin >> row;
    cout << "Enter colomn: ";
    cin >> col;

    int arr[row][col];

    for(int i = 0; i < row;i++){
        for(int j = 0; j < col;j++){
            cout <<"Enter[" <<i <<"][" <<j <<"]" <<"index: ";
            cin >>arr[i][j];
        }
        cout <<endl;
    }
    
    cout <<"Your 2D array: "<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0;j<col;j++){
            cout <<arr[i][j] <<" ";
        }
        cout <<endl;
    }
    

 







    return 0;
}