#include<iostream>
using namespace std;

string merge1(string& word1,  string& word2){
     
     string ans;

     //Loop through the size of word2
     //(since it is smaller of equal to word1)
     for(int i=0; i<word2.size(); i++){
         
         ans += word1[i];
         ans += word2[i];
     }

     //Since word1 is longer, add the remaining of word1 
     for(int i=word2.size(); i<word1.size(); i++){
         
         ans += word1[i];
     }
     return ans; //Return the merged string
}

string merge2(string& word2, string& word1){
     
     string ans;

      //Loop through the size of word1
     //(since it is smaller of equal to word2)
     for(int i=0; i<word1.size(); i++){
         
         ans+=word1[i];
         ans+=word2[i];
     }
     //since word2 is longer, add the remaining of word1
     for(int i=word1.size(); i<word2.size(); i++){
         
         ans+=word2[i];
     }

     return ans; //Return the merged string
}


int main() {
     
     string word1,word2;
     cout<<"Enter the string1: ";
     getline(cin,word1);
     cout<<"Enter the string2: ";
     getline(cin,word2);

     if(word1.size() >= word2.size()){
        string result1 = merge1(word1,word2);
        cout<<"Merge1: "<<result1;
     }
     else{
         string result2 = merge2(word2,word1);
         cout<<"Merge2: "<<result2;
     }

     
}