#include <iostream>
using namespace std;

#define g "\033[32m"
#define reset "\033[0m"

int main(){
    int marks[5] ={34,79,89,90,45} ;
    for(int i= 0;i< 5;i++){
        cout << marks[i] <<endl;
    }
    cout << g << "Successful Execution!" << reset <<endl;
        return 0;
}