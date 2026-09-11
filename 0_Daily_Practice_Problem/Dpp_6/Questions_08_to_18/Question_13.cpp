#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(3,5);
    v.push_back(10);
    cout << v[2] <<" " << v[3];
}