#include<iostream>
using namespace std;
class Animal{
    public:
       string name;    
       int age;
       string family;
       Animal(string n, int a, string f){
           name = n;
           age = a;
           family = f;
       }
       Animal(){

       }
       void print(){
        cout<<"Name: "<<name<<endl;
        cout <<"Age: "<<age <<endl;
        cout <<"Family: "<<family<<endl;
       }

};

void change(Animal a){//pass by Value not affect the original
        a.name = "Tiger";
}

int main(){
        Animal a1("Lion", 32,"Cat_Family");
        change(a1);
        a1.print();

}