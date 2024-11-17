#include<iostream>
using namespace std;

// Function to find the length of the last word in the string
int LengthOfLastWord(string& s){
     
     int length = 0;         // Variable to store the length of the last word
     bool counting = false;  // Flag to indicate if we are counting the characters of a word

     // Loop through the string from the last character to the first one
     for(int i = s.size() - 1; i >= 0; i--){
         
         // If the character is not a space, it is part of a word
         if(s[i] != ' '){
            length++;          // Increase the length of the last word
            counting = true;   // Set the flag to true, indicating we are in a word
         }
         // If we encounter a space and we were counting a word, stop the loop
         else if(counting){
            break;            // Break the loop as we've found the last word
         }
     }
     
     return length;  // Return the length of the last word
}

int main(){ 

    string s;
    cout<<"Enter the string: ";
    getline(cin,s);

    LengthOfLastWord(s);
}