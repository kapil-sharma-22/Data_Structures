#include<iostream>
using namespace std;

// Function to check if the string is a valid palindrome
bool ValidPalindrome(string &s) {

    // If the string is empty, return true (an empty string is considered a palindrome)
    if(s.empty()){
        return true;
    }

    // Temporary string to hold only alphanumeric characters (lowercase)
    string ch;

    // Loop through each character in the original string
    for(int i = 0; i < s.size(); i++){
         
        // If the character is an uppercase letter, convert it to lowercase and add to the temporary string
        if(s[i] >= 'A' && s[i] <= 'Z'){
            ch += s[i] + 32;  // ASCII value of 'A' is 65, 'a' is 97, so adding 32 converts uppercase to lowercase
        }
        // If the character is already lowercase or a digit, add it to the temporary string
        else if(s[i] >= 'a' && s[i] <= 'z' || s[i] >= '0' && s[i] <= '9'){
            ch += s[i];
        }
    }

    // Initialize two pointers: one at the start and one at the end of the string
    int start = 0;
    int end = ch.size() - 1;

    // Check if the string is a palindrome by comparing characters at both ends
    while (start < end) {
         
        // If characters at start and end don't match, return false (not a palindrome)
        if(ch[start] != ch[end]){
            return false;
        }
        // Move the pointers towards the center
        start++;
        end--;
    }

    // If all characters matched, return true (it is a palindrome)
    return true;
}

int main() {
    // Declare a string variable to hold the input
    string s;

    // Prompt the user to enter a string
    cout << "Enter the string: ";
    
    // Read the full line of input from the user (including spaces)
    getline(cin, s);

    // Call the ValidPalindrome function to check if the string is a palindrome
    if (ValidPalindrome(s)) {
        cout << "The string is a valid palindrome." << endl;
    } else {
        cout << "The string is not a valid palindrome." << endl;
    }

    return 0;
}
