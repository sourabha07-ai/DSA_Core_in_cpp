#include<iostream>
#include<algorithm>
#include<string>
using namespace std;


int main(){
    string name;
    cout <<"Enter a string: ";
    getline(cin,name);
    cout <<"String: "<<name <<endl;
    int n = name.size();
    string half_string = name.substr(n/2);
    cout <<"Half string: "<<half_string <<endl;

}