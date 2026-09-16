#include <iostream>
using namespace std;

class Animals{
    public:
    virtual void sound(){
        cout <<"Animal Class..." <<endl;
    }
};

class Dog:public Animals{
    public:
    void sound() override{
        cout <<"Dog Sound: Bow Bow..." <<endl;
    }
};


int main(){
    Animals* a;
    Dog d;
    a = &d;
    a -> sound();
}
