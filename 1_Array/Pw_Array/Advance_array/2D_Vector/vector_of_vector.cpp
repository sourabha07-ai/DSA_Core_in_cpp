#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1 = {3,7,8,9};
    vector<int> vec2 = {4,5};
    vector<int> vec3 = {6,7,8};
    vector<int> vec4 = {4};

    vector<vector<int>> vec = {vec1,vec2,vec3,vec4}; //Jagged array
    for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec[i].size();j++){
            cout << vec[i][j] <<" ";
        }
        cout << endl; 
    }
    // vec.push_back(vec1);
    // vec.push_back(vec2);
    // vec.push_back(vec3);
    // vec.push_back(vec4);

}