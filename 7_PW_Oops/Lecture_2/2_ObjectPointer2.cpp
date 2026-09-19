#include<iostream>
using namespace std;
class Student{
   public:
       string name;
       int age;
       string email;
       Student(string name, int age,string email){
        this->name = name;
        this->email = email;
        this->age = age;
       }  
       void print(){
          cout <<"Name of Student: "<<name <<endl;
          cout <<"age: "<<age <<endl;
          cout <<"emaill: "<<email <<endl;
       }   
};

int main(){
        Student S1("Sourabha Jena",24,"sourabhajena2002@gmail,com");
        // S1.print();

        Student S2("Pujarani Maity",21,"pujaranimaity2002@gmail.com");
        Student* ptr = &S2;

        cout <<(*ptr).name<<endl;
        cout <<ptr->age<<endl;

        ptr->name = "Sourabha Jena";
        S2.print();

}