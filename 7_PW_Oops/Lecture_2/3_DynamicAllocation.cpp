#include <iostream>
#include <vector>
using namespace std; 
class Employees{
   public:
      int id;
      string name;
      string role;
      bool active;
      float salary;

      Employees(int id,string name,string role, bool active,float salary){
         this->id = id;
         this->name = name;
         this->role = role;
         this->active = active;
         this->salary = salary;
      }

      Employees(){}
      
     void print(){
        
        cout<<"Employees Details: "<<endl;
        cout <<"ID: "<<id <<endl;
        cout <<"Employee Name: "<<name <<endl;
        cout <<"Role: "<<role <<endl;
        cout <<"Active: "<<boolalpha<<active <<endl;
        cout <<"Salary: "<<salary <<endl;
        cout <<endl;
     }

};

int main(){
   Employees E1(1,"Sourabha Jena","Software Enginner",true,80000);
   Employees E2(2,"Deepak Bar","Business Man",true,90000);
   Employees E3(3,"Sangita Biswala","Writer",false,40000);
   
   E1.print();E2.print();E3.print();


   //! Dynamic Allocation 
   Employees* E4 = new Employees(4,"Pujarani Maity","Manger",true,150000);
   E4->print();
  
    return 0;
}