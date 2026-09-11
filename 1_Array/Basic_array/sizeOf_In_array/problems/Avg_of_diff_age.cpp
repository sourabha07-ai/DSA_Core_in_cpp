#include <iostream>
using namespace std;

/*To demonstrate a practical example of using arrays, let's create a program that calculates the average of different ages:*/

int main(){
   //step-1
   int ages[5] = {23,32,12,28,45};
     
//step-2
float avg,sum = 0;
   
//step - 3
int len_of_age = sizeof(ages) / sizeof(ages[0]);

for(int age : ages){
    sum = sum + age;
}
    cout <<"Sum of all ages: " <<sum <<endl;
    cout <<"Length Of Array: " <<len_of_age<<endl;

    avg = sum / len_of_age;
    cout <<"Average of all ages: " << avg<<endl;

    return 0 ;
}