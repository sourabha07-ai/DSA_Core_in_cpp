#include <iostream>
using namespace std;

int n ;//Global Variable
void print(int x){
      if(x > n) return ; //Base Case
      cout<<x <<" ";//Work
      print(x + 1);//Calling itself
       
}
int main(){
      cout <<"Enter a Number: ";
      cin >> n;
      
      cout <<"Sum of 1 to "<<n <<" ; ";
      print(1);
      cout<<endl;
}