#include <iostream>
using namespace std;

// A shopkeeper applies a discount of d% on the marked price m, and then charges a tax of
// t% on the discounted price. Take m, d, and t (all doubles) as input and print the final amount
// the customer pays.
// Discounted Price = m − d/100 ×m 
// Final Price = Discounted Price ×(1 + t /100)
// Sample — Input: m = 1000, d = 10, t = 18 ⇒ Output: 1062

int main(){
    double m,d,t;
    cout <<"Enter Marked Price: ";
    cin >>m;
    cout <<"Enter discount: ";
    cin >> d;
    cout <<"Time: ";
    cin >> t;

    double dp =  m - d/100 * m ;
    double Final_Price  =  dp  * (1 + t/100 ) ;

    cout <<"Final Price: "<<Final_Price <<endl; 


    return 0;
}