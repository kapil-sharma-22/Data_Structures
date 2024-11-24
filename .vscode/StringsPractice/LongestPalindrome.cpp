#include<iostream> 
#include<vector> 
using namespace std;

// Function to find the length of the longest palindrome that can be formed from the given string
int LongestPalindrome(string& s) {
    // Two vectors to count the occurrences of lowercase and uppercase letters
    vector<int> lower(26, 0);  // For lowercase 'a' to 'z'
    vector<int> upper(26, 0);  // For uppercase 'A' to 'Z'

    // Iterate over each character of the string to count occurrences
    for(int i = 0; i < s.size(); i++) {
       
        if(s[i] >= 'a') {  // Check if the character is lowercase
            lower[s[i] - 'a']++;  // Increment the count for the lowercase letter
        }
        // If the character is uppercase
        else {
            upper[s[i] - 'A']++;  // Increment the count for the uppercase letter
        }
    }

    int count = 0;  // To store the length of the longest palindrome
    bool odd = 0;   // Flag to track if there's any character with an odd frequency

    // Iterate over all possible characters (26 lowercase and 26 uppercase)
    for(int i = 0; i < 26; i++) {
        
        if(lower[i] % 2 == 0) { // Check for lowercase characters
            count += lower[i];  // If the frequency is even, add it to the count
        } else {
            count += lower[i] - 1;  // If the frequency is odd, add the even part of it
            odd = 1;  // Mark that we have an odd frequency
        }

        // Check for uppercase characters
        if(upper[i] % 2 == 0) {
            count += upper[i];  // If the frequency is even, add it to the count
        } else {
            count += upper[i] - 1;  // If the frequency is odd, add the even part of it
            odd = 1;  // Mark that we have an odd frequency
        }
    }

    // If there's at least one character with an odd frequency, we can place one in the center of the palindrome
    return count + odd;
}

// Main function to take input and display the result
int main() {
    string s;
    cout << "Enter the string: ";  // Prompt the user to enter a string
    cin >> s;  // Take the input string

    // Call the LongestPalindrome function and print the result
    cout << "The Longest Palindrome is: " << LongestPalindrome(s);
}
