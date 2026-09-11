#include <iostream>
#include <string>
using namespace std; 

int main(){
        int n ;
        cout <<"Enter number: ";
        cin >> n;

        string str = "";
        while(n != 0){
                int lastDigit = n % 10;
                char ch = lastDigit + 48;
                str.push_back(ch);
                n /= 10;
        }

        //reverse 
        int i = 0, j = str.length() - 1;
        while(i < j ){
                swap(str[i],str[j]);
                i++;
                j--;
        }
        cout <<"String : \""  << str << "\" " <<endl;
  
    return 0;
}