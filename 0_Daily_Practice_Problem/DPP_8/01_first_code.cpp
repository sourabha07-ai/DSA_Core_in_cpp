#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v = {1, 2, 4, 4, 4, 6, 7};

    auto l = lower_bound(v.begin(), v.end(), 4);
    auto u = upper_bound(v.begin(), v.end(), 4);
    cout << u - l<<endl;
}