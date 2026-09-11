#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
   int my_num[6] = {12,23,34,45,56,67};
    for(int i = 0;i < 6 ; i++){
        cout <<g <<"index_"<< i <<reset <<" - " << my_num[i] <<endl;
    }




    return 0;
}