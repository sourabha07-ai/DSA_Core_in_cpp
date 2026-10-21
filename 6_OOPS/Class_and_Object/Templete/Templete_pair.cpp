#include<iostream>
using namespace std;

template <typename T1,typename T2>
class Pair{
    public:
    T1 first;
    T2 second;

    Pair(T1 first,T2 second){
        this->first = first;
        this->second = second;
    }

    void display(){
        cout <<"first: " <<first <<endl;
        cout <<"Second: " <<second <<endl;
    }

};

int main(){
    Pair<string,int> person("Sourabha" , 23);
    Pair<double,int> score(4.5,6);

    person.display();
    score.display();
}