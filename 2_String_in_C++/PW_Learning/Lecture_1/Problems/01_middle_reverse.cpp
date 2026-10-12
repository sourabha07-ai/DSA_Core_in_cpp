#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
string name = "SOURABHA";
cout<<"Name: "<<name<<endl;

int len_str = name.length();
int mid = len_str/2;

int i = 0,j = mid - 1;
while(i < j){
    swap(name[i],name[j]);
    i++;
    j--;
}
cout <<"Name: "<<name <<endl;




//    string name = "SOURABHA";
//    int mid = name.length() /2;
//    reverse(name.begin(),name.begin()+mid);
//    cout <<"Name: "<<name<<endl;

 
    return 0;
}