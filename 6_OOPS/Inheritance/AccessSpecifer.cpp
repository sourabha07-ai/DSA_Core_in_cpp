#include <iostream>
using namespace std;

class MyClass{
    protected:
    int salary;
};

class MyChildClass:public MyClass{
    public:
    int bonus;
    void setSalary(int salary){
        this->salary = salary;
    }
    int getSalary(){
        return salary;
    }
};

int main(){

    MyChildClass myObj;
    myObj.setSalary(30000);
    myObj.bonus = 10000;

    cout <<"Salary: " <<myObj.getSalary() <<endl;
    cout <<"Bonus: " <<myObj.bonus <<endl;

    return 0;
}