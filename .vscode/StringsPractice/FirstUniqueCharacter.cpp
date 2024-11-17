#include<iostream>
#include<map>
using namespace std;

char FirstUniq(string& s) {
    // Create a map to store the frequency of each character in the string
    map<char, int> myMap;

    // Loop through the string to count the occurrences of each character
    for (int i = 0; i < s.size(); i++) {
        // Increment the count for the character at position i
        myMap[s[i]]++;
    }

    // Loop through the string again to find the first unique character
    for (int i = 0; i < s.size(); i++) {
        // If the character appears only once (it's unique), return its index
        if (myMap[s[i]] == 1) {
            return i;  // Return the index of the first unique character
        }
    }

    // If no unique character is found, return -1 to indicate no unique character exists
    return -1;
}


int main(){
     
     string s;
     cout<<"Enter the string: ";
     getline(cin,s);

     FirstUniq(s);
}