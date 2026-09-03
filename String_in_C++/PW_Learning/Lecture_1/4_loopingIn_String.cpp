#include <iostream>
#include <vector>
#include<string>
using namespace std; 

int main(){
        string name = "Sourabha Jena!";
        //  for(int i = 0;i < name.size();i++){
        //         cout <<name[i] <<" ";
        //  }
        //  cout <<endl;

        for(char ele:name) cout <<ele <<" ";  
        cout <<endl;
    return 0;
}