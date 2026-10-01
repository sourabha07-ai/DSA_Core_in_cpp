#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    for(int a:arr) cout <<a <<" ";
    cout <<endl;
}

int main(){
    vector<int> vec = {10,20,30,40,50,60,70,80};
    cout <<"Array: ";print(vec);
   
    //target
    int target;
    cout<<"Enter target: ";
    cin >> target;

    //target present or not
     bool found = false;

    //Size of array
    size_t n = vec.size();

    //index value
    int low_idx = 0;
    int hig_idx = n - 1;

    //Binary Search
    while(low_idx <= hig_idx){

        //mid index
        int mid_idx = (low_idx + hig_idx )/2;

        //Condition check
        if(vec[mid_idx] > target){
            hig_idx = mid_idx - 1;

        }else if(vec[mid_idx] < target){
             low_idx = mid_idx + 1;
        }else{
            cout << "Target found at index: "<<mid_idx<<endl;
            found = true;
            break;
        }
    }
    if(!found){
        cout <<"Target not found" <<endl;
    }

}