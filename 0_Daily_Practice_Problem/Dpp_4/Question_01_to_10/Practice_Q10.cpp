#include<iostream>
using namespace std;

int main(){
    int k = 1;
    for(int i = 1; i <= 3; i++){
        for(int j = 1; j <= i;i++){
            cout <<k++ <<" ";
            if(k > 4) break;
        }
        if(k > 4) break;
        cout <<endl;
    }
}