#include<iostream>
#include<vector>
using namespace std;

void SortVowels(string& s) {
     
     vector<int>lower(26,0);
     vector<int>upper(26,0);

     for(int i=0; i<s.size(); i++){
         
         if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
              
              lower[s[i] - 'a']++;
              s[i] = '#'; //Replacing the vowel with '#' so we can store the sorted vowels when we encounter '#'
         }
     }

     for(int i=0; i<s.size(); i++){
         
          if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U'){

            upper[s[i] - 'A']++;
            s[i] = '#'; //Replacing the vowel with '#' so we can store the sorted vowels when we encounter '#'
          }
     }

     string ans;

     for(int i=0; i<26; i++) {
         
         char c = 'A' + i;
            while(upper[i]){  //first all the Uppercase characters comes as per the ASCII value
            ans += c;
            upper[i]--;
         }
     }

     for(int i=0; i<26; i++){
         
         char c = 'a' + i;
         while(lower[i]) {  //Then the lowercase characters comes as per the ASCII value
             ans += c;
             lower[i]--;
         }
     }

     int first = 0;
     int second = 0;

     while(second < ans.size()) {
        if(s[first] == '#'){  //Place the sorted vowels characters in the place of '#'
             s[first] = ans[second];
             second++;
         }
         first++;
     }

}

int main() {
     
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);

     SortVowels(s);
}