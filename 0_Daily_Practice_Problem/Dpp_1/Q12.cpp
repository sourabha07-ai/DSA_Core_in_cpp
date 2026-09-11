#include <iostream>
using namespace std;

// Take four integers a, b, c, d as input. Compute and print (a +b) ×(c+d).
// Sample — Input: 1 2 3 4 ⇒ Output: 21

int main(){
    int a , b , c , d;
    cout <<"Input: ";
    cin >>a >> b >> c >> d ;

    int print = (a + b ) * (c + d);
    cout <<"Output: " << print <<endl;
   

    return 0;
}