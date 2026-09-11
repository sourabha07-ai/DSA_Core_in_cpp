#include<iostream>
using namespace std;

int main(){
    int arr[3][4] = 
    {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    cout <<"Matrix: "<<endl;
    for(int i = 0; i < size(arr);i++){
        for(int j = 0; j < size(arr[0]);j++){
            cout <<arr[i][j] <<" ";
        }
        cout <<endl;
    }

    return 0;
}
