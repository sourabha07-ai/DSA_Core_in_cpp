#include<iostream>
#include<string>
#include<climits>
using namespace std;

int main(){
   string str;
   cout<<"Enter a String convert Interger: ";
   cin >>str;

   int i = 0;
   long long num = 0;
   int sign = 1;


     //Handle Space
   while(i < str.length() && str[i] == ' '){
      i++;
   }
   
   //handle sign
   if(i < str.length() && str[i] =='-'){
      sign = -1;
      i++;
   }else if(i < str.length() && str[i] == '+'){
       i++;
   }

   //Convert dights
   while(i < str.length() && str[i] >= '0' && str[i] <= '9'){
      num  = num * 10 +( str[i] - '0');
     
      if(sign == 1 && num > INT_MAX){
        cout <<INT_MAX <<endl;
        return 0;
      }
      if(sign == -1 && num < INT_MIN){
        cout <<INT_MIN <<endl;
        return 0;
      }
    
      i++;

   }

   cout <<"Number is: " <<num * sign <<endl;

 
    return 0;
}