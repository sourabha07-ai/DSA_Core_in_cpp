#include <iostream>
using namespace std;

int main(){
    int arr[][4] = {{5,3,4,6},{9,5,3,2},{7,5,3,0}};
    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 4;j++){
            cout <<arr[i][j] <<" ";
        }
        cout <<endl;
    }
}