#include <iostream>
#include <string>
using namespace std;

int main(){
     string custom_letters[2][3] =
     {
        {"A","B","C"},
        {"D","E","F"}
     }; 
     cout <<custom_letters[0][0] <<" ";
     cout <<custom_letters[0][1] <<" ";
     cout <<custom_letters[0][2] <<" ";
     
     cout <<endl;
     //Access the element in array and changes

     custom_letters[0][2] = "c";
     custom_letters[0][1] = "b";
     custom_letters[0][0] = "a";
     cout <<custom_letters[0][2] <<" ";
     cout <<custom_letters[0][1] <<" ";
     cout <<custom_letters[0][0] <<" ";

     cout<<endl<<endl;
    //second rows
     cout <<custom_letters[1][0] <<" ";
     cout <<custom_letters[1][1] <<" ";
     cout <<custom_letters[1][2] <<" ";

     cout <<endl;
     //Change the array
     custom_letters[1][2] = "f";
     custom_letters[1][1] = "e";
     custom_letters[1][0] = "d";
     cout <<custom_letters[1][2] <<" ";
     cout <<custom_letters[1][1] <<" ";
     cout <<custom_letters[1][0] <<" ";

  cout <<endl<<endl;

     string custom_letter_2[2][2][2] = {
    {
        {"G","H"},
        {"I","J"}
    },
    {
        {"K","L"},
        {"M","N"}
    }
};
   
    cout <<custom_letter_2[0][0][0]<<" ";
    cout <<custom_letter_2[0][0][1]<<" ";
    cout <<custom_letter_2[0][1][0]<<" ";
    cout <<custom_letter_2[0][1][1]<<" ";

    cout <<endl;

    cout <<custom_letter_2[1][0][0]<<" ";
    cout <<custom_letter_2[1][0][1]<<" ";
    cout <<custom_letter_2[1][1][0]<<" ";
    cout <<custom_letter_2[1][1][1]<<" ";
   
    


















    return 0;
}