#include <iostream>
using namespace std;
#define y "\033[33m"
#define reset "\033[0m"


class MyClass{ //create class
    public://Access specifier
    void myMethod();//method declaration
};

void MyClass::myMethod(){ //method defination outside the class
    cout <<y <<"Hello Sourabha..."<<reset <<endl;
}

int main(){
   MyClass myObj;
   myObj.myMethod();

    return 0 ;
}
