#include <iostream>
using namespace std;

class MyX{
    public:
    void myFunction(){
        cout <<"Sourabha is Best." <<endl;
    }
};

class MyX_Child: public MyX{
  
};

class MyX_GrandChild: public MyX_Child{

};

int main(){
    MyX_GrandChild m;
    m.myFunction();

}