#include <iostream>
using namespace std;

class Student{
public:
        string name;
        int age;
        string email;
        Student(string n, string e, int a){
                name = n;
                age = a;
                email = e;
        }
        Student( string n,int a, string e){
                name = n;
                age = a;
                email = e;
        }
        Student(int a, string n, string e){
                name = n;
                age = a;
                email = e;
        };
        Student(){

         }
};
void print(Student s){
        cout<<"Name: " <<s.name <<endl;
        cout<<"age: " <<s.age <<endl;
        cout<<"email: " <<s.email <<endl;
        cout <<endl;
}

int main(){
        Student S1(24,"Sourabha","sourabha@gmail.com");
        Student S2("Pujarani","pujarani@gmail.com",21);
        Student S3("pravudeep",24,"pravudeep@gmail.com");

        Student S4;//Call default Constructor
        S4.name = "Manoj Behera";
        S4.age = 34;
        S4.email = "manoj@gmail.com";

        print(S1);
        print(S2);
        print(S3);
        print(S4);

       
}