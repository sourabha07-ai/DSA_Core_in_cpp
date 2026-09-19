#include<iostream>
using namespace std;

int main(){
   int x = 10;
   int* ptr = &x;
   cout <<"ptr: "<<ptr <<endl;
   cout<<"*ptr: "<<*ptr <<endl;
   cout<<"&x: "<<&x<<endl;
   
   
   cout<<"x = "<<x<<endl;
   *ptr = 20;
   cout<<"x = "<<x<<endl;
   
}