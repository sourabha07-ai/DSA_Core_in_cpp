#include <iostream>
#include <vector>
using namespace std;
void print(const vector<int> &arr){
        for (int a : arr){
           cout << a << " ";
        }
        cout << endl;
}

int main(){
        vector<int> arr = {2, 7, 11, 15};
        cout<<"array: ";print(arr);

        int target = 26;
        cout<<"Target: "<<target <<endl;

        size_t n = arr.size();
        for(int i = 0;i < n;i++){
          for(int j = i+1;j < n;j++){
                 if(arr[i] + arr[j] == target) cout <<arr[i] <<" & "<<arr[j]<<" Sum is "<<target<<endl;
                 
        }
}



        return 0;
}