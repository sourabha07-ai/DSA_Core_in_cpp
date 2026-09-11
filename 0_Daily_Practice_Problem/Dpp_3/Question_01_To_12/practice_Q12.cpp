#include <iostream>
using namespace std;

int main(){
    int i = 0;
    for(;;){
        if(i == 5){
            break;
        }
        cout << i << " ";
        i += 2;
    }
    return 0; //infinite Loop
}