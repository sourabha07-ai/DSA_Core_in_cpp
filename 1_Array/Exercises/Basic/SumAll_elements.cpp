#include <iostream>
using namespace std;

int main(){
   int arr[] = {10,20,30,40};
   int sum  = 0;

   for(size_t i = 0; i<size(arr);i++){
      sum += arr[i];
   }
   cout <<"Sum of all Elements " <<sum <<endl;
}