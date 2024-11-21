#include<iostream>
#include<vector>
using namespace std;
// Function to check if a sentence is a Pangram
bool CheckPangram(string &sentence) {
     
    // Create a vector of size 26 initialized to false (0), 
    // representing the 26 letters of the English alphabet.
    vector<bool> alpha(26, 0);

    // Loop through each character in the input sentence.
    for (int i = 0; i < sentence.size(); i++) {
    
        //we calculate its corresponding index in the alphabet.
        // For example: 'a' -> 0, 'b' -> 1, ..., 'z' -> 25
            alpha[sentence[i] - 'a'] = 1;  // Mark the letter as found by setting its corresponding index to 1.
        // Non-alphabet characters (like spaces, punctuation) are ignored.
    }

    // Now check if all the alphabet letters (from 'a' to 'z') have been found.
    for (int i = 0; i < alpha.size(); i++) {
        if (alpha[i] == 0) {
            return false;  // If any letter hasn't been found, return false (not a Pangram).
        }
    }
    
    return true;  // If all letters are found, return true (it is a Pangram).
}

int main() {
     
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);

     if(CheckPangram(s))
     cout<<"Sentence is Pangram";
     else
     cout<<"Sentence isn't Pangram";
}