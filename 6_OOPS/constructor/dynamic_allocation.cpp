#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


class Fruits{
   public:
   string name;
   int price;
   string city;
   Fruits(string name,int price,string city){
    this->name = name;
    this->price = price;
    this->city = city;
   }
};
void print(Fruits* f){
    cout <<"Fruits Details: " <<endl;
    cout<<"Fruit Name: " <<y <<f->name <<reset <<endl;
    cout <<"Fruit price: " <<f->price <<"$" <<endl;
    cout <<"Available city: " <<f->city <<endl;
}
int main(){
   Fruits f1("Banana",500,"Tamilnadu");
   Fruits* f2 = new Fruits("Coconuts",400,"Andra");

   cout <<f1.name <<" " <<f1.price <<" " <<f1.city <<endl;
   print(&f1);
   cout<<endl;
    cout <<f2->name <<" " <<f2->price <<" " <<f2->city <<endl;
    print(f2);

    return 0;
}