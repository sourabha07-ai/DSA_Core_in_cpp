#include <iostream>
using namespace std;

class OverLoading{
    public:
    string name;
    int age;

    OverLoading(){
        name = "Unknown";
        age = 0;
    }

    OverLoading(string name,int age){
        this->name = name;
        this->age = age;
    }
};

int main(){
    OverLoading o1;
    OverLoading o2("Sourabha",23);

    cout <<"Name: " <<o1.name <<", age: " <<o1.age <<endl;  
    cout <<"Name: " <<o2.name <<", age: " <<o2.age <<endl;  


    return 0;
}