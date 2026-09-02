#include<iostream>
#include<string>
using namespace std;

int main(){
        //First way
        char name[] = "Sourabha";
        cout <<"My name is: " ;
        for(int a:name){
             cout <<char(a) <<" ";   
        }
        cout <<endl;

        //Another way
        string name_1 = "Sourabha";
        cout <<"another name: ";
        // cout <<"another name: " <<name_1 <<endl;
        for(int a : name_1){
                cout <<char(a) <<" ";
        }
        cout <<endl;

        string name_2("Puja!");
        cout <<"Name: " << name_2 <<endl;

}    