#include <iostream>
using namespace std;

int main(){
   double x1,x2,x3,y1,y2,y3;
   cout <<"First Co-Ordinate Point: ";
   cin >>x1 >>y1;

   cout <<"Second Co-Ordinate Point: ";
   cin >>x2 >> y2;

   cout <<"Third Co-Ordinate Point: ";
   cin >>x3 >> y3;

   double co_linear_points_1 = (y2 -y1) * (x3 - x2);
   double co_linear_points_2 = (y3 - y2) * (x2 - x1);

   if(co_linear_points_1 == co_linear_points_2){
    cout << "Collinear points" <<endl;
   }else{
     cout <<"NOT Collinear points" <<endl;
   }

    return 0;
}