#include <iostream>
using namespace std;
/*Write a program to print an Alternating Row Offset Pattern for a given integer n
as shown below.
Sample — Input: n = 5 ⇒ 
Output:
1 1 1 1 1
 2 2 2 2
3 3 3 3 3
 4 4 4 4
5 5 5 5 5
*/

int main(){
    int n;
    cout <<"Enter N: ";
    cin >> n;

    //Rows
    for(int i = 1; i <=n;i++){
         

        //Condition
        // Odd rows print n times, even rows print n-1 times
        int count = (i % 2 == 0) ? n - 1 : n;

        
        //Column
        for(int j = 1; j <= count; j++){
            cout << i <<" ";
        }
        cout <<endl;
    }

}