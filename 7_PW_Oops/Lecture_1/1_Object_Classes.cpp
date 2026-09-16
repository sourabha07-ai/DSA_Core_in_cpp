#include <iostream>
using namespace std;
class Students{
public:
        double id;
        string name;
        int age;
        string email;
};

int main(){
        Students student_1 ;
        student_1.id = 76;
        student_1.name = "Sourabha Jena";
        student_1.age = 24;
        student_1.email = "sourabhajena2003@gmail.com"; 

        cout<<"Student_id:"<<student_1.id<<endl
        <<"Student_name:"<<student_1.name<<endl
        <<"Student_age:"<<student_1.age<<endl
        <<"Student_email:"<<student_1.email<<endl;

        cout <<endl;

        Students student_2;
        student_2.id = 75;
        student_2.name = "Srimanta Jena";
        student_2.age = 65;
        student_2.email = "srimantajena1967@gmail.com";

        cout<<"Student_id:"<<student_2.id<<endl
        <<"Student_name:"<<student_2.name<<endl
        <<"Student_age:"<<student_2.age<<endl
        <<"Student_email:"<<student_2.email<<endl;

        cout<<endl;

        Students student_3 = {74,"Arati Jena",56,"aratijena1987@gmail.com"};
        cout<<"Student_id:"<<student_3.id<<endl
        <<"Student_name:"<<student_3.name<<endl
        <<"Student_age:"<<student_3.age<<endl
        <<"Student_email:"<<student_3.email<<endl;

        return 0;
}