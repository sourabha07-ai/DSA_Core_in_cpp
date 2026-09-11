#include <iostream>
#include <vector>
#include <string>
using namespace std; 

int main(){
        string name = "Sourabha Jena";
        cout <<"Loop using Name: ";

        //! method - 1
        for(int i = 0; i < name.length();i++){
                cout <<name[i] <<" ";
        }
        cout <<endl;

        //! Method -2 
        // for(char a:name){
        //     cout <<a<<" ";
        // }
        // cout <<endl;

  
    return 0;
}