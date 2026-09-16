#include <iostream>
using namespace std;

class Animals{
    public:
    void animal_Sound(){
        cout <<"Animal can produce Sound very Good." <<endl;
    }
};

class Dog:public Animals{
    public:
    void sound(){
        cout<<"Dog sound: Bow Bow..." <<endl;
    }
};

class Cat:public Animals{
    public:
    void sound(){
        cout<<"Cat Sound: Meow Meow..." <<endl;
    }
};

int main(){
    Animals myAnimal;
    Dog myDog;
    Cat myCat;

    myAnimal.animal_Sound();
    myDog.sound();
    myCat.sound();
}