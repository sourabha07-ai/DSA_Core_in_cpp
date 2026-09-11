#include <iostream>
using namespace std;

int main(){
   int a = 0, b = 0;
   if(a++ && ++b){
    cout <<"Conditon Standard Check ture" <<endl;
   }

   cout <<"a = " <<a <<", b = " <<b <<endl;
    return 0;
}