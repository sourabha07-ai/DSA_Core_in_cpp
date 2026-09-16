#include <iostream>
using namespace std;

class Employees{
    private:
    int salary;

    public:
     void setSalary(int s){ //setter
        salary = s;
     }

     int getSalary(){ //getter
        return salary;
     }
};

int main(){
    Employees e1;
    e1.setSalary(30000);
    cout << "Salary: " <<e1.getSalary() <<endl;


    return 0;
}