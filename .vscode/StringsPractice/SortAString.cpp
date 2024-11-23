#include<iostream>
#include<vector>
using namespace std;

//syntax = string(n,char)
//n -> no of copies 
//char -> the character to be repeated
//Ex = string(2,a) --> 'aa' and append to -> 'ans'

string Sorting(string& s) {
     
     vector<int>alpha(26,0);

     //Counting the frequency of each character 
     for(int i=0; i<s.size(); i++){
         alpha[s[i] - 'a']++;
     }

     string ans;

     for(int i=0; i<26; i++) {
         
         //Ex: c = 97 + 0 -> 97--> represents 'a' similary --> 97+1 -> 98 --> represents 'b'
         char c = 'a' + i;

         //Append until that specific character becomes 0;
         while(alpha[i]) {
             
             ans += c;
             alpha[i]--;
         }
     }
     return ans;
}

int main(){ 

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

   string sortedString = Sorting(s);

    cout<<"After sorting: ";
    for(int i=0; i<sortedString.size(); i++){
         
         cout << sortedString[i] << " ";
    }
}