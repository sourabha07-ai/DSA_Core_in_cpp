#include <iostream>
using namespace std;

int main(){
    int arr[][4] = {{1,2,1,0},{2,3,1,1},{2,1,3,1}};
    int sum = 0;
    for(int i = 0; i < 3;i++){
         for(int j = 0; j < 4;j++){
            sum = sum + arr[i][j];
         }
    }
    cout <<sum;
    
}