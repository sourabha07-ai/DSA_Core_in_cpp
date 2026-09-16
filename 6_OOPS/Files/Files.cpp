#include <iostream>
#include <fstream>
using namespace std;

int main(){

     // Create and open a text file
    ofstream Myfile("sourabha.txt");

     // Write to the file
    Myfile << "Sourabha is a Good Boy...";

    // Close the file
    Myfile.close();

     
    string myText;

    ifstream myReadfile("sourabha.txt");

    while (getline(myReadfile,myText)){
        cout << myText;
    }

    myReadfile.close();
    
    return 0;
}