#include <iostream>
using namespace std;

class MyClass{
    public:
    void myFunction(){
        cout <<"My function" <<endl;
    }
};

class MyOtherClass{
    public:
    void myOtherFunction(){
        cout <<"My another Function." <<endl;
    }
};

class MyChildClass: public MyClass, public MyOtherClass{

};



int main(){
    MyChildClass obj;
    obj.myFunction();
    obj.myOtherFunction();

    return 0;
}