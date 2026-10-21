#include <iostream>
#include <string>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


class Student{
    public:
    string name;
    int id;
    int marks;
    Student(string name,int id,int marks){
        this->name = name;
        this->id = id;
        this->marks = marks;
    }
    int average(){
        return marks/6;
    }
};
void print(Student s){
    cout <<y <<"Student Details:-" <<reset <<endl;
    cout<<"-----------------" <<endl;
    cout <<"Student Name: " <<s.name <<endl;
    cout <<"Student id: " <<s.id <<endl;
    cout <<"Student Marks: " <<s.marks <<endl;
    cout <<"Student Average: " <<s.average() <<endl;
};

int main(){
    Student s1("Sourabha Jena",12,450);
    print(s1);


    return 0;
}