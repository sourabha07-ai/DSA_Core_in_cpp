#include <iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i = 1; i <= n; i++){
        int x = 1;
        for(int j = 1; j <= n; j++){
            if (j <= n - i ){
                cout <<" ";
            }else{
                cout << x  ;
                x = !x;
            }
        }
        cout <<endl;
    }
}