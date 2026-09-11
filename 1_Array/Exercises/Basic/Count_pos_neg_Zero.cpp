#include <iostream>
using namespace std;

int main(){
   int nums[] = {10,20,-2,0,-45,67};
   int positive = 0,negative = 0, zero = 0;

   
   for(int n : nums){
 
      if(n > 0){
        positive++;
         
      }
      else if (n < 0){
        negative++;
         
      }else{
        zero++;
      }
   }
   cout <<"Positive: " <<positive <<endl;
   cout <<"Negative: " <<negative <<endl;
   cout <<"Zero: " <<zero <<endl;

}
