#include <iostream>
using namespace std;
#define g "\033[32m"
#define reset "\033[0m"
#define y "\033[33m"


int main(){
    string cars[5] = {"BMW", "Audi", "Mercedes", "Lexus", "Porsche"};
     
     for(int i = 0; i< 5;i++ ){
        cout <<g <<cars[i] <<reset <<",";
     }
     cout<<endl;
     
     for(int i = 0;i < 5; i++){
        cout <<y <<i  <<reset <<" - " <<cars[i] <<endl;
     }

    return 0;
}