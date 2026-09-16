#include<iostream>
using namespace std;

//Without Virtual Function

class Animals{
    public:
    void sound(){
        cout <<"<<< Animal Sound >>>" <<endl;
    }
};

class Dog: public Animals{
    public:
    void sound(){
        cout <<"<<< Dog Sound: Bow Bow >>>" <<endl;
    }
};

int main(){
    Animals* a; //* Declare a pointer to the base class (Animal)

    Dog d ; //* Create an object of the derived class (Dog)

    a = &d; //* Point the base class pointer to the Dog object

    a->sound(); //* Call the sound() function using the pointer. Since sound() is not virtual, this calls Animal's version


}