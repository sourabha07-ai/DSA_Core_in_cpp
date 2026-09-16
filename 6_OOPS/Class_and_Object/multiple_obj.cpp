#include<iostream>
using namespace std;

class Cat{
    public:
      string name;
      int life_span;
  };

int main(){
   Cat c1;
  c1.name = "Lion";
  c1.life_span = 30;

  cat c2;
  c2.name = "Tiger";
  c2.life_span = 40;

  cout <<"Name: "<<c1.name <<endl;
  cout <<"Life Span: "<<c1.life_span <<endl;
  cout <<"------------------" <<endl;
  cout << "Name: " <<c2.name <<endl;
  cout << "Life Span: " <<c2.life_span <<endl;

    return 0;
}