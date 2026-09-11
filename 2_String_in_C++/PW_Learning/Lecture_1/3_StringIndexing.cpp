#include <iostream>
#include<string>
using namespace std;

int main(){
     string name = "Gojo Sataroo!";
     cout <<"Name: "<<name <<endl;
     
     name[0] = 'J';
     cout <<"Name: "<<name <<endl;

     cout <<"Name of length: " <<name.size() <<endl;
}