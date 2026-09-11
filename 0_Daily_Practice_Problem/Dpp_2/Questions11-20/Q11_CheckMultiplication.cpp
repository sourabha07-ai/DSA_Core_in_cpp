#include <iostream>
using namespace std; 

// Take two integers as input from the user. Determine and print whether their multiplica-
// tion product is positive, negative, or zero without calculating the absolute numeric valuation
// value if possible.
// Sample — Input: -4 5 ⇒ Output: Product is Negative

int main(){
    int m,n;
    cout <<"Input: ";
    cin >> m >>n;

    double mul = m * n;

    if(mul == 0){
        cout <<"Multiplication is Zero." <<endl;
    }else if (mul > 0){
        cout <<"Produt is Positive" <<endl;
    }else{
        cout <<"Produt is Negative." <<endl;
    }

    return 0;
}