#include <iostream>
using namespace std;

int main(){
   int code = 2;
   switch(code){
    case 1: cout <<"Alpha" <<endl;
    case 2: cout <<"Beta" <<endl;
    case 3: cout <<"Gamma" <<endl;
          break;
     default: cout << "Omega" <<endl;     
   }

    return 0;
}