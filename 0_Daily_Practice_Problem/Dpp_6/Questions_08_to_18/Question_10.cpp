#include <iostream>
#include <vector>
using namespace std;

void updateVector(vector<int> v){
  v[0] = 100;
}

int main(){
    vector<int> vec = {1,2,3};
    updateVector(vec);
    cout << vec[0];
    
}