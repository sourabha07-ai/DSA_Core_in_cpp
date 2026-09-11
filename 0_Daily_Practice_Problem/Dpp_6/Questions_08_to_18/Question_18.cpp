#include <iostream>
#include <vector>
using namespace std;

int main(){

    vector<int> v = {10,20,30};
    int& ref = v[0];

    for(int i = 0; i < 100; i++){
        v.push_back(i);
    } 
    ref = 999;
    cout << v[0] <<endl;
}
