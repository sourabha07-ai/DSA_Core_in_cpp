#include <iostream>
using namespace std;

template <typename T>
class Box{
    public:
    T value;
    Box(T value){
         this->value = value;
    }
    void show(){
        cout <<"Value: " <<value <<endl;
    }
};


int main(){
    Box<int> intBox(30);
    Box<string> stringBox("Hello!");

    intBox.show();
    stringBox.show();

    return 0;
}