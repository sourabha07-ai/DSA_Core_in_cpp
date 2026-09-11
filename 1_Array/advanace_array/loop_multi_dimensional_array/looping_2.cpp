#include <iostream>
using namespace std; 

int main(){
   string custom_letters[2][3] =
     {
        {"A","B","C"},
        {"D","E","F"}
     }; 
       //Looping
     for(int i = 0;i < 2;i++){
        for(int j = 0;j < 3;j++){
            cout<<custom_letters[i][j] <<" ";
        }
     }

    return 0;
}