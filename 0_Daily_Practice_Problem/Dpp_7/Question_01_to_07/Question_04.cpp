#include <iostream>
#include<vector>
using namespace std; 

void modify(vector<vector<int>> v){
    v[0][0] = 99;
}
int main(){
  vector<vector<int>> vec = {{1,2},{3,4}};
  modify(vec);
  cout << vec[0][0] <<endl;
}