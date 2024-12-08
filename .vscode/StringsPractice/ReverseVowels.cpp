#include<iostream>
using namespace std;

void ReverseVowels(string& s) {
     
     string ans;

     for(int i=0; i<s.size(); i++){
         
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||
           s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){

            ans += s[i];
            s[i] = '#';
       }
     }

     int first = 0;
     int second = ans.size()-1;

     while(second >= 0) {
         
         if(s[first] >= 0){
             if(s[first] == '#'){
                s[first] = ans[second];
                second--;
             }
         }
         first++;
     }
}

int main() {
     
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);

     ReverseVowels(s);
}