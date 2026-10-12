#include <iostream>
#include <string>
#include<algorithm>
using namespace std;

int main()
{
    int num ;
    cout<<"Enter a Number: ";
    cin>>num;
    cout << "Number: " << num << endl;
    string str = "";

    int negative = num < 0;

    if (num == 0){
        str = "0";
    }
    else{
        while (num != 0){
          int digit = num % 10;
          if(digit < 0) digit = -digit;

          str = str + char(digit + '0');
          num = num /10;
        }

        int i = 0; int j = str.length()-1;
        while(i < j){
            swap(str[i],str[j]);
            i++;
            j--;
        }
    }
    if(negative){
        str = "-" + str;
    }
    cout <<"String : \""  << str << "\" " <<endl;
    return 0;
}
