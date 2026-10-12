#include<iostream>
#include<string>
using namespace std;

int main(){
    string str1 = "listen";
    string str2 = "silent";

    if(str1.length() != str2.length()){
        cout << "Not Anagram"<<endl;
        return 0;
    }

    int freq[26] = {0};

    for(int i = 0; i < str1.length();i++){
       freq[str1[i]-'a']++;
       freq[str2[i]-'a']--;
    }

    for(int i = 0; i < 26;i++){
         if (freq[i] != 0) {
            cout << "Not Anagram"<<endl;
            return 0;
        }
    }
 
    cout <<"Anagram"<<endl;
    return 0;
}