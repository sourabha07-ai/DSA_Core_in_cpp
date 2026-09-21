#include <iostream>
#include <vector>
using namespace std; 
class Student{
private:
  bool active;

public:
      string name;
      int roll_no;
      Student(string name, int roll_no,bool active){
         this->name = name;
         this->roll_no = roll_no;
         this->active = active;
      }
     
      //getter method
      void getStudent(){
         cout<<"Student name: "<<name <<endl;
         cout<<"Roll Number: "<<roll_no <<endl;
         cout<<"Active: "<<boolalpha<<active<<endl;
      }

      
};

int main(){
     Student* s1 = new Student("Sourabha jena",95,true);
     s1->getStudent();
   //   cout <<s1->active<<endl; //!inaccessible
  
    return 0;
}