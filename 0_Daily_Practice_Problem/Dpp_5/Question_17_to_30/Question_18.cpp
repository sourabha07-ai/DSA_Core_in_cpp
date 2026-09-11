#include <iostream>
using namespace std;
/*
Write a function printEven(int start, int end) that prints all even numbers between
start and end (inclusive). Call it from main().
Sample — Input: 10 15 ⇒ Output: 10 12 14
*/

void printEven(int start, int end){
    cout <<"Output: ";
    for(int i = start; i <= end ; i++){
        if(i % 2 == 0){
            cout << i <<" ";
        }
    }
}
int main(){
    int start,end;
    cout <<"Start Number: ";
    cin >> start;
    cout <<"End Number: ";
    cin >>end;

    printEven(start,end);

}