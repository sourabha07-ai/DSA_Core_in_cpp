#include<iostream>
using namespace std;

class Emlployees{
    private:
    int salary;
    string email;

    public:
    Emlployees(int s,string e){
          salary = s;
          email = e;
    }
    friend void displaySalary(Emlployees emp);
};


void displaySalary(Emlployees emp){
        cout <<"Salary: " <<emp.salary <<endl;
        cout<<"Email: " <<emp.email <<endl;
    }

    
int main(){
   Emlployees emp1(20000,"sourabhajena2002@gmail.com");
   displaySalary(emp1);

    return 0;
}