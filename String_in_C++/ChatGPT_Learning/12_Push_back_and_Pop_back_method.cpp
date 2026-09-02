#include <iostream>
#include <string>
using namespace std; 

int main(){
        string name = "Sourabha";
        cout <<"Name: "<<name <<endl;
        name.pop_back();
        cout <<"Use pop_back(): " <<name <<endl;
        
        name.push_back('a');
        cout <<"Use push_back(): "<<name <<endl;
    return 0;
}