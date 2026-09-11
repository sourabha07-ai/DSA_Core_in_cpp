#include <iostream>
using namespace std;

int main(){
   int x = 0, y = 5;
   if(x != 0 && (y = y + 10) > 10){
    cout <<"Inside if Branch" <<endl;
   }
   cout <<"x = " <<x << ", y = " <<y <<endl;

    return 0; 
}