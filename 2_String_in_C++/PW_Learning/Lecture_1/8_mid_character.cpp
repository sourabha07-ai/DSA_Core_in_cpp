#include <iostream>
#include <string>
using namespace std;

int main(){
    string words;
    cout<<"Enter any single-Words: " ;
    cin >>words;

    int len = words.length();
    
  if(len % 2 == 0){
     cout <<"Middle character is: " <<words[len/2 - 1] <<" " <<words[len/2] <<endl;
  }else{
    cout<<"middle Character is: " <<words[len/2] <<endl;
  }
    return 0;
}