#include<iostream>
using namespace std;

string ReverseLetters(string& s) {

    string ans;
     
     for(int i=0; i<s.size(); i++){
         
         if((s[i]>='A' && s[i]>='Z') || (s[i]>='a' && s[i]<='z')){ //Insert the letters into a string 'ans'

            ans += s[i];
            s[i] = ' '; //We insert a space in place of letters
         }
     }

     int first = 0;
     int second = ans.size()-1;

     while(second >= 0) { 
         
         if(s[first] == ' ') { //If ' ' is encountered 
             s[first] = ans[second]; //Insert the 'ans' string from reverse order inside the 's' string 
             second--;
         }
         first++;
     }
     return s;
}

int main() {
     
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);

     string result = ReverseLetters(s); 
     cout<<"After Reversing the Letters: "<<result;
     
}