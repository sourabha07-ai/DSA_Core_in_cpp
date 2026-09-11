#include <iostream>
#include <vector>
using namespace std;

int main(){
    int arr[2][2] = {{10, 20}, {30, 40}};
    int (*ptr)[2] = arr;
    cout << **(ptr + 1) << " " << *(*ptr + 1) <<endl;
}