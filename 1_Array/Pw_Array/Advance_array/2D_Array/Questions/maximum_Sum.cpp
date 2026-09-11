#include <iostream>
using namespace std;
#define g "\033[32m"
#define reset "\033[0m"


int main(){
    int arr[][3] = {{9,4,3},{2,3,7},{8,7,8}};
    int maxRow = -1; int maxSum = INT_MIN;
    for(int i = 0; i < 3;i++){
        int sum = 0;
         for(int j = 0; j < 3;j++){
            cout <<arr[i][j] <<" ";
             sum += arr[i][j];
         }
         cout <<endl;
         if(sum > maxSum){
            maxSum = sum;
            maxRow = i;
         }
         
    }
    cout <<"Max Row no. " <<g <<maxRow <<reset <<endl;
    cout <<"Maximum Sum: " <<g <<maxSum <<reset <<endl;

}