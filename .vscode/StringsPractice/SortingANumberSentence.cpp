#include<iostream>
#include<vector>
using namespace std;

string SortSentence(string& s) {
     
     vector<string>ans(10);
     int count = 0, index = 0;
     string temp;

     while(index < s.size()){
         
         if(s[index] == ' ') {

            int pos = temp[temp.size()-1] - '0'; //Insert --> That is last number of the sentence
            temp.pop_back(); //Delete the last number

            ans[pos] = temp;   //Insert the temp string in the ans with position 
            temp.clear();  //Now clear the temp -> so we can insert the next sentence 

            count++; //Count the number of sentence
             
         }
         else{
             temp += s[index]; //insert the sentence with number in -> temp;
         }
         index++;
     }
     // Repeat the process-->For the last sentence 
      int pos = temp[temp.size()-1] - '0';
            temp.pop_back();

            ans[pos] = temp;
            temp.clear();

            count++;

            //Insert the string in ans--> into --> temp again
            for(int i=1; i<=count; i++) {
                 
                 temp += ans[i];
                 temp += ' ';
            }

            return temp;
}

int main() {
     
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);

     string Sorted = SortSentence(s);

     for(int i=0; i<Sorted.size(); i++){
         
         cout<< Sorted[i];
     }
}