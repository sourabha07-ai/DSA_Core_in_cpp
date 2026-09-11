#include <iostream>
using namespace std;

int main(){
    int arr[] = {10,20,30,50,60};
     arr[3] = 40;
     
     for(int n : arr){
        cout <<n <<" ";
     }
    
}