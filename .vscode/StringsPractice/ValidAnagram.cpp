#include<iostream>
#include<vector>
using namespace std;

bool ValidAnagram(string s, string t) {

    //If size is different than it is not 'anagram'
     if(s.size()!=t.size()){
        return false;
     }

     vector<int>count_s(26,0);
     vector<int>count_t(26,0);

     //Counting the frequency of 's' and 't'
     for(int i=0; i<s.size(); i++){
         
         count_s[s[i] - 'a']++;

         count_t[t[i] - 'a']++;
     }

     //Check the frequency count of both strings 
     for(int i=0; i<26; i++){
         
         if(count_s[i] != count_t[i]){
             
             return false;
         }
     }

     return true;

}

int main() {
     
     string s = "anagram";
     string t = "nagaram";

     if(ValidAnagram(s,t))
        cout<<"Valid Anagram";
     else
        cout<<"Not a Anagram";
     
}