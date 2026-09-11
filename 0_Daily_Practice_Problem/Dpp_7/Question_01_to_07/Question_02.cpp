#include <iostream>
#include<vector>
using namespace std;

int main(){
   vector<vector<int>> v (3,vector<int>(2,7));
   cout << v[2][1]<<endl;
}