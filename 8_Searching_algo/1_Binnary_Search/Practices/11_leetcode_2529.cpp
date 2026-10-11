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

int maximumCount(vector<int>& nums) {
        int neg = 0, pos = 0, zero = 0;

        // Find number of negative elements
        int low = 0, high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] < 0) {
                neg = mid + 1;
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        // Find number of zero elements
        low = neg;
        high = nums.size() - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (nums[mid] == 0) {
                zero = mid + 1;
                low = mid + 1;
            } 
            else {
                high = mid - 1;
            }
        }

        // Convert zero's ending index into count
        zero = zero > 0 ? zero - neg : zero;

        // Remaining elements are positive
        pos = nums.size() - neg - zero;

        return max(neg, pos);
    }


int main(){
   vector<int> arr = {-5,-4,-3,-2,-1,0,1,2,3,4,5,6};
   cout <<"array: ";print(arr);

   int res = maximumCount(arr);
   cout<<"Output: "<<res<<endl;

 
    return 0;
}