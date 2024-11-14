#include<iostream>
#include <vector>
using namespace std;


// Function to find the insert position of a target in a sorted array
int SearchInsertPos(int arr[], int n, int target) {
    // Initialize pointers for binary search
    int start = 0, end = n - 1;
    int index = -1; // Variable to store the index of the target if found

    // Perform binary search
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid index

        // Check if the target is found at mid
        if (arr[mid] == target) {
            index = mid; // If found, store index
            break; // Exit loop
        } 
        // If target is greater than the mid element
        else if (arr[mid] < target) {
            start = mid + 1; // Move to the right half
        } 
        // If target is less than the mid element
        else {
            index = mid; // Potential insert position
            end = mid - 1; // Move to the left half
        }
    }

    // If the target was found, return its index
    if (index != -1) {
        return index;
    } 
    // If the target was not found
    else {
        // Return the index at which the target can be inserted
        // This would be at the end of the array if the target is greater than all elements
        index = n; // Set index to size of the array
        return index; // Return the insert position
    }
}

int main(){
     
     int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter the elements in increasing order: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    cout<<SearchInsertPos(arr,n,target);
}

