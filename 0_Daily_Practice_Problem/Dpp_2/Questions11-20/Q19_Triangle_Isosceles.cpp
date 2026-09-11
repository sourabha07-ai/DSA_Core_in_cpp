#include <iostream>
using namespace std;

int main(){
   int a,b,c;
   cout <<"Enter The side of Triangle: ";
   cin >> a >> b >> c;

   if((a + b > c) && (b + c > a) &&(c + a > b)){
      if(!(a==b && b==c)){
         if(a==b || b==c|| c==a){
            cout <<"Isosceles Triangle" <<endl;
         }else{
            cout <<"Scalene Triangle" <<endl;
         }
      }else{
        cout <<"Equilateral triangle" <<endl;
      }
   }else{
    cout <<"Invalid Triangle" <<endl;
   }



    return 0;
}