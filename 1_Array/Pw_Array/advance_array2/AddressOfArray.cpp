#include <iostream>
using namespace std;

int main(){
    int array[] = {12,23,45,22};
    int n = size(array);
    cout <<"Size of Array is: " <<n <<endl;
    cout <<&array[0] <<endl;
    cout <<&array[1] <<endl;
    cout <<&array[2] <<endl;
    cout <<&array[3] <<endl;
}