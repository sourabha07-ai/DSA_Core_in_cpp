#include <iostream>
using namespace std;

int main(){
  char ch ;
  cout <<"Enter a Charecter: ";
  cin >>ch;

  if(ch >= 'A' && ch <='Z'){
    cout <<"Uppercase Alphabet" <<endl;
  }else if(ch >= 'a' && ch <='z'){
    cout <<"Lowercase Alphabet" <<endl;
  }else if(ch >= '0' && ch <= '9')  {
     cout <<"This Digit" <<endl;
  }else{
    cout <<"special symbolic character." <<endl;
  }

    return 0;
}