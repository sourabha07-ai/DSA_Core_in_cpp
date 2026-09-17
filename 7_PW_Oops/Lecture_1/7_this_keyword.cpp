#include <iostream>
using namespace std; 
class Pokemon{
   public:
      string name;
      string type;
      int hp;
      Pokemon(string name,string type, int hp){
       this->name  = name;
        this->type = type;
        this->hp = hp;
      } 
      void print(){
        cout<<"\n-------Pokemon Details-----"<<endl;
        cout <<"Name: "<<name <<endl;
        cout <<"Type: "<<type <<endl;
        cout <<"Hp: "<<hp <<endl;
      }    
};

int main(){
        Pokemon p1("Pikachu","Electric",7000);
        Pokemon p2("Charizad","Fire",40000);

        Pokemon p3("Mew2","Psychic",30000);
        p1.print();
        p2.print();
        p3.print();

  
    return 0;
}