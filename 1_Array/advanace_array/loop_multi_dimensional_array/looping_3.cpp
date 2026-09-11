#include <iostream>
using namespace std; 

int main(){
    string letters[2][2][4] = {
    {
        {"G","H","I","J"},
        {"K","L","M","N"}
    },
    {
        {"O","P","Q","R"},
        {"S","T","U","V"}
    }
};

for(int i = 0;i < 2;i++){
        for(int j = 0;j < 2;j++){
            for(int k = 0; k < 4;k++){
                cout <<letters[i][j][k] <<" ";
            }
        }
    }
  
    return 0;
}