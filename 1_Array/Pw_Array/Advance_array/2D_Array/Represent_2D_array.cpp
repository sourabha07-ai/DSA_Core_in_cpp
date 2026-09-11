#include <iostream>
using namespace std; 

int main(){
    int arr[][4] = {{9,3,4,6},{4,8,6,4},{9,5,1,8}};

    // for(size_t i = 0; i < size(arr);i++){
    //     for(int j = 0; j < 4 ; j++){
    //         cout << arr[i][j] <<" ";
    //     }
    //     cout <<endl;
    // }

    for(size_t j = 0; j < 4;j++){
        for(int i = 0; i< 3 ; i++){
            cout << arr[i][j] <<" ";
        }
        cout <<endl;
    }


     
    return 0;
}