#include <iostream>
using namespace std;

int &trickyUpdate(int &x, int y)
{
    x = x + y;
    return x;
}
int main()
{
    int val = 5;
    trickyUpdate(val, 3) = 23;
    cout << val;
}