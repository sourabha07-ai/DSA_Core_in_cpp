#include <iostream>
using namespace std;

enum Level {
    ONE,TWO,THREE
};

int main(){
    enum Level my_num = TWO;
    cout << my_num <<endl;
    return 0;
}