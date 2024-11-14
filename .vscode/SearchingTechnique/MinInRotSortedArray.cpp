#include<iostream>
#include<vector>
using namespace std;

int FindMin(vector<int>& arr) {
    // Initialize the start and end pointers
    int start = 0, end = arr.size() - 1;
    
    // Assume the minimum element is the first element in the array
    int ans = arr[0];

    // Keep searching while the start pointer is less than or equal to the end pointer
    while (start <= end) {
        
        // Find the middle index
        int mid = start + (end - start) / 2;

        // If the middle element is greater than or equal to the first element,
        // it means the left part is sorted. The minimum must be in the right part.
        if (arr[mid] >= arr[0]) {
            start = mid + 1;  // Move the start pointer to the right half
        } 
        // If the middle element is smaller than the first element,
        // it means the left part is unsorted, so the minimum is in the left part.
        else {
            ans = arr[mid];  // Update the answer with the current middle element
            end = mid - 1;   // Move the end pointer to the left half
        }
    }

    // After the loop, the minimum element has been found
    return ans;  // Return the minimum element
}


int main() {
     
     int n;
     cout<<"Enter the number of elements: ";
     cin>>n;
     cout<<"Enter the elements: ";

     vector<int> arr;

     for(int i=0; i<n; i++){
         int x;
         cin>>x;
         arr.push_back(x);
     }

     cout << "The Minimum element in the rotated sorted array is: " << FindMin(arr);
}