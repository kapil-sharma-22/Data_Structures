#include<iostream>
using namespace std;

// Function to perform binary search on a sorted array
bool BinarySearch(int arr[], int n, int target) {
    int start = 0; // Initialize the starting index of the array
    int end = n - 1; // Initialize the ending index of the array

    // Loop until the start index exceeds the end index
    while (start <= end) {
        // Calculate the middle index of the current segment
        int mid = start + (end - start) / 2;

        // Check if the middle element is the target
        if (arr[mid] == target) {
            return true; // Target found
        }
        // If the target is greater, ignore the left half
        else if (target > arr[mid]) {
            start = mid + 1; // Move start to mid + 1
        }
        // If the target is smaller, ignore the right half
        else {
            end = mid - 1; // Move end to mid - 1
        }

        // Note: The line below is not needed and can be removed.
        // mid = start + end / 2; // Incorrect adjustment of mid
    }
    return false; // Target not found
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
    cout<<BinarySearch(arr,n,target);

}
