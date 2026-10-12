#include<iostream>
#include<string>
using namespace std;

int countDigits(int num){
    if(num >= -9 && num <= 9){
        return 1;
    }
    return 1 + countDigits(num / 10);
}

int main(){
   int num = 123456;
   cout <<"Number: " <<num <<endl <<"Number of digits: "<<countDigits(num)<<endl;
 
    return 0;
}