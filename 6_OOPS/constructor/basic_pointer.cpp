#include <iostream>
using namespace std;

class Employees{
    public:
    int id;
    string name;
    double salary;
    string city;
    Employees(int id,string name,double salary,string city){
        this->id = id;
        this->name = name;
        this->salary = salary;
        this->city = city;
    }
};

void print(Employees e){
    cout <<"Employees Details: "<<endl;
    cout <<endl;
    cout <<"id: " <<e.id <<endl;
    cout <<"Name: " <<e.name<<endl;
    cout <<"Salary: "<<e.salary <<endl;
    cout <<"City: "<<e.city <<endl;
};
void changes(Employees *e){
    e->city = "Kunjakothi";
}

int main(){
    int x = 5;
    cout <<x<<endl; //5
    cout <<&x <<endl; //0x61ff08
     int* ptr = &x;
     cout <<ptr <<endl; //0x61ff08
     cout <<*ptr <<endl;//5
     *ptr = 4;
     cout <<*ptr <<endl;//4
     cout <<ptr <<endl; //0x61ff08



    return 0;
}