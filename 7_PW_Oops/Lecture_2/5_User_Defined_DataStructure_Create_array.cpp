#include <iostream>
#include <vector>
using namespace std; 


int main(){
    int* arr  = new int[6];
    arr[0] = 20;


    int b[] = {28,27};
    arr = b;
    cout<<arr[0]<<endl;
  
    return 0;
}