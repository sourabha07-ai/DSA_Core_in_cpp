#include <iostream>
using namespace std;

int main(){
   int ages[5] = {23,45,18,20,13};
      int lowest_age = ages[0];

          for(int age : ages ){
            if (lowest_age > age)
                  lowest_age = age;
          }
      cout << "Lowest age in Age_array : " << lowest_age <<endl;    
      

    return 0;
}