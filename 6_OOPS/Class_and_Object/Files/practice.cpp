#include <iostream>
#include <fstream>
using namespace std;

int main(){
   ofstream writeFile("PracticeFile.md");

   writeFile <<"# Hello Sourabha ";

   writeFile.close();

   string myText;

   ifstream readFile("PracticeFile.md");

   while(getline(readFile,myText)){
    cout <<myText;
   }

   readFile.close();

    return 0;
}