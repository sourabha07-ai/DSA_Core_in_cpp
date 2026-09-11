#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<vector<int>> v;
    v.push_back({1, 1});
    int &ref = v[0][0];

    for (int i = 0; i < 100; i++)
    {
        v.push_back({i, i});
    }

    ref = 100;
    cout << v[0][0] << " " << v.size()<<endl;

    return 0;
}