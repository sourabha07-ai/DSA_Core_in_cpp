#include <iostream>
using namespace std;

int main(){
   int p = 1,q =  20;
   if(p == 1 || (q = q + 5) > 25){
    cout << "First Brance hit " <<endl;
   }else{
    cout <<"p = " <<p <<", q = " <<q <<endl;
   }
    return 0;
}