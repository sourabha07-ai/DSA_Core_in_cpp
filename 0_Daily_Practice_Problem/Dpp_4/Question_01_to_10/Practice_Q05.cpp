#include <iostream>
using namespace std;

int main(){
    int count = 1;
    for(int i = 1; i <= 3;i++){
        for(int j = 1; j <= 3; j++){
            if(i == j){
                cout << "X"<<" ";
            }else{
                cout << count++ <<" ";
            }
        }
        cout <<endl;
    }
}