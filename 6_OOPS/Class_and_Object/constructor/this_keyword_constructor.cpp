#include <iostream>
using namespace std;

class Cricketer{
   public:
     string name;
     int score; 
     Cricketer(string name,int score){
        this->name = name;
        this->score = score;
     }
};

void print(Cricketer c){
    cout <<"Cricketer Name: " <<c.name <<endl;
    cout <<"Cricketer Score: " <<c.score <<endl;
};

int main(){
    Cricketer c1("Ms Dhoni",20000);
    print(c1);

    return 0;
}