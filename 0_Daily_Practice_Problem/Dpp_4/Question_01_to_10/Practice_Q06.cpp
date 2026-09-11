#include <iostream>
using namespace std;

int main(){
    for(int i = 1; i <= 3; i++){
        int val = i;
        for(int j = 1; j <= 3; j++){
            cout << val <<" ";
            val += 2;
        }
        cout <<endl;
    }
}