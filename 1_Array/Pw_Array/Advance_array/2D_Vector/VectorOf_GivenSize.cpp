#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m,n;
    cout <<"Enter a size of row: ";
    cin >> m;

    cout <<"Enter a size of cols: ";
    cin >> n;

    vector<vector<int>>vec(m,vector<int>(n,-1));

    vec.push_back(vector<int>(4,0));
    //out put
    for(int i = 0; i <vec.size();i++){
        for(int j = 0; j < vec[i].size();j++){
            cout <<vec[i][j] <<" ";
        }
        cout <<endl;
    }

    return 0;
}