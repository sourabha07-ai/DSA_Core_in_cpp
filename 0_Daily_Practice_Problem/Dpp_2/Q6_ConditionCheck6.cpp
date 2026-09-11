#include <iostream>
using namespace std;

int main(){
    int marks = 45;
    bool pass = (marks >= 40) ? true : false;
    int bonus = pass ? 5 : 0;
    cout <<"Pass Status: " <<pass <<", Bonus: " <<bonus <<endl;
    return 0;
}