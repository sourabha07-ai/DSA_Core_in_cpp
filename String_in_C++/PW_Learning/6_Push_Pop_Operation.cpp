#include <iostream>
#include <string>
#include<algorithm>
using namespace std; 

int main(){
        string str = "sourabha!";
        str.pop_back();
        str.push_back('p');
        cout <<"Name is : "<<str <<endl;


        // sort(str.begin(),str.end());
        // reverse(str.begin(),str.end());
        reverse(str.begin()+1,str.end()-1);
        cout <<"Name is : "<<str <<endl;


    return 0;
}