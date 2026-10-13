#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
   string s = "abbcccddef";
   
   int n = s.length();
   vector<int> freq(26,0);

   for(char ch:s){
    int idx = ch - 97;
     freq[idx]++;
   }

   int maxFreqency = 0;
   for(int i = 0;i < 26; i++){
    maxFreqency = max(freq[i],maxFreqency);

   }
   
   if (maxFreqency == 1) {
     cout <<"nothing"<<endl;
     return 0;
}

   for(int i = 0;i < 26;i++){
     if(freq[i]==maxFreqency){
       cout<<"Most frequent letter:" << (char)(i+97)<<endl;
       break;
     }
   }

    return 0;
}