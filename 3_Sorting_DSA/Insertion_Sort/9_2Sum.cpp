#include <iostream>
#include <vector>
using namespace std; 
void print(const vector<int>& arr){
     for(int a:arr){
        cout <<a <<" ";
    }
  cout <<endl;
}

int main(){
    vector<int> arr = {2,7,11,15};
    cout<<"array: ";print(arr);

        int target = 26;
        cout<<"Target: "<<target <<endl;
        vector<int> ans(2);

        size_t n = arr.size(); 
        for(int i = 0; i < n; i++) {
            for(int j = i + 1; j < n; j++) {

                if(arr[i] + arr[j] == target) {
                    ans[0] = i;
                    ans[1] = j;
                    ans.push_back(i);
                    ans.push_back(j);
      }
    }
                          
}
cout <<"array index ["<<ans[0] <<","<<ans[1] <<"]"<<endl;
  
    return 0;
}