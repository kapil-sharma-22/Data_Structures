#include<iostream>
#include<vector>
using namespace std;

// Function to find the first and last occurrence of a target in a sorted array
void FirstAndLast(vector<int>& arr, int target) {
    // Initialize start and end pointers
    int start = 0, end = arr.size() - 1;
    int first = -1, last = -1;

    // Finding the First Occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid index

        // Check if mid element is the target
        if (arr[mid] == target) {
            first = mid;  // Update first occurrence index
            end = mid - 1; // Move left to find earlier occurrences
        } else if (arr[mid] < target) {
            start = mid + 1; // Target is on the right side
        } else {
            end = mid - 1; // Target is on the left side
        }
    }

    // Reset start and end pointers for the second search
    start = 0;
    end = arr.size() - 1;

    // Finding the Last Occurrence
    while (start <= end) {
        int mid = start + (end - start) / 2; // Calculate mid index

        // Check if mid element is the target
        if (arr[mid] == target) {
            last = mid;  // Update last occurrence index
            start = mid + 1; // Move right to find later occurrences
        } else if (arr[mid] < target) {
            start = mid + 1; // Target is on the right side
        } else {
            end = mid - 1; // Target is on the left side
        }
    }

    // Output the results
    cout << "The First And Last Occurrence respectively are: " << first << " " << last << endl;
}

int main(){

    int n;
    cout<<"Enter the size: ";
    cin>>n;

    vector<int> arr(n);
    cout<<"Enter the elements in increasing order: ";
    for(int i=0; i<n; i++){
         int x;
         cin>>x;
         arr.push_back(x);
    }

    int target;
    cout<<"Enter the target element: ";
    cin>>target;

    FirstAndLast(arr,target);


}