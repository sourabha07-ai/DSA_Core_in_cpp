#include <iostream>
#include <string>
using namespace std;

int main(){
      string name = "Sourabha Jena!";
      cout <<"Name: " <<name <<endl;
      int n = name.length();
      int count = 0;
      
      for(int i = 0;i < n; i++){
        char ch = name[i];
        if(ch >= 65 && ch <= 90) ch += 32;
        if(ch =='a') count++;
        else if(ch == 'e') count++;
        else if(ch == 'i') count++;
        else if(ch == 'o') count++;
        else if(ch == 'u') count++;
      }
      cout <<"Vowel Count : " << count <<endl;
}