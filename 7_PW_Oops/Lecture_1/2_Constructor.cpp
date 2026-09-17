#include <iostream>
using namespace std;
class Student{
public:
     string name;
     int age;
     string email;
     Student(string n, int a, string e){
                name = n;
                age = a;
                email = e;
        }

};

void print(Student s){
    cout <<"Name: "<<s.name<<endl;
    cout <<"Age: "<<s.age<<endl;
    cout <<"email: "<<s.email<<endl;

}
int main(){
        Student s1("Sourabha Jena",23,"sourabhajena2003@gmail.com");
        print(s1);

        return 0;
}