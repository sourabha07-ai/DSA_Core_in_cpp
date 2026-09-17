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

void change(Animal& a){//pass by Referance affect the original Object
        a.name = "Tiger";
}

int main(){
        Animal a1("Lion", 32,"Cat_Family");
        // Animal a1;
        // a1.name = "Lion";
        // a1.age = 32;
        // a1.family = "Cat_Family";
        change(a1);
        a1.print();

}