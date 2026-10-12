#include<iostream>
#include<string>
using namespace std;

int main(){
    string arr[] = {"0123","0023","456","00182","940","2901"};
    string max = arr[0];

    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 1; i < n;i++){
        if(stoi(arr[i]) >  stoi(max)){
            max = arr[i];
        }
    }
   cout << max <<endl;
 
    return 0;
}