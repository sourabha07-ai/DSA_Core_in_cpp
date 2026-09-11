#include <iostream>
using namespace std;
#define g "\033[32m"
#define y "\033[33m"
#define reset "\033[0m"


int main(){
    int a ,b;
    cout <<"Enter a: ";
    cin >> a;
    cout <<"Enter b: ";
    cin >>b;

    if(a % 2 != 0 and b % 2 != 0){
        cout <<g <<"Both a and b is ODD" <<reset <<endl;
    }
    else if (a % 2 != 0 || b % 2 != 0){
        if(a %2 != 0){
            cout << "a is ODD" <<endl;
        }else{
            cout <<"b is ODD" <<endl;
        }
    }else{
        cout <<"Both are Even." <<endl;
    }

    return 0;
}