#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>&arr){
    #define reset   "\033[0m"
    #define r     "\033[31m"
    #define g   "\033[32m" 
    #define y  "\033[33m"
    for(int a:arr) cout <<y <<a <<" " <<reset;
    cout<<endl;
}

 vector<int> floorSortedArray(vector<int>& arr, int target) {
    vector<int> ans;

    int low = 0;
    int high = arr.size() - 1;
    int floorIndex = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] <= target) {
            floorIndex = mid;
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    for (int i = 0; i <= floorIndex; i++) {
        ans.push_back(arr[i]);
    }

    return ans;
}
int main(){
    vector<int> arr = {1, 3, 5, 7, 9};
    cout << "array:";print(arr);

    int target = 6;
    cout <<"target:"<<target<<endl;

    vector<int> result = floorSortedArray(arr,target);
    cout <<"Remaines number: ";print(result);

 
    return 0;
}