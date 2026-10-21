#include <iostream>
#include <string>
using namespace std;

class Student{
    private:
    int id;
    string name;

    public:
    Student(int id,string name){
        this->id = id;
        this->name = name;
    }

    friend void displayFunction(Student s);

};

void displayFunction(Student s){
    cout << "Student ID: " <<s.id <<endl;
    cout <<"Student Name: " <<s.name <<endl;
}

int main(){
    Student s1(202,"Sourabha Jena.");
    displayFunction(s1);

    return 0;
}