#include<iostream>
using namespace std;

// Function to perform linear search on an array
bool LinearSearch(int arr[], int n, int target) {
    // Iterate through each element in the array
    for(int i = 0; i < n; i++) {
        // Check if the current element is equal to the target
        if(arr[i] == target)
            return true; // Return true if target is found
    }
    return false; // Return false if target is not found after checking all elements
}

int main() {
    int n; // Variable to hold the size of the array
    cout << "Enter the size: ";
    cin >> n; // Input the size of the array
    
    int arr[n]; // Declare an array of size n
    cout << "Enter the elements: ";
    // Input elements into the array
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int target; // Variable to hold the target element to be searched
    cout << "Enter the element to be searched: ";
    cin >> target; // Input the target element
    
    // Calling the LinearSearch function and checking the result
    if(LinearSearch(arr, n, target))
        cout << "Element is found"; // Element found
    else 
        cout << "Element is not found"; // Element not found

    return 0; // Indicate successful completion of the program
}
