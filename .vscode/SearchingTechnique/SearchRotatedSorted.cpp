#include<iostream>
#include<vector>
using namespace std;

int SearchInRotated(vector<int>& arr, int target){
     
    // Initialize the start and end pointers for binary search
    int start = 0, end = arr.size() - 1;
    
    // Variable 'ans' is initialized to -1, which will be returned if the target is not found
    int ans = -1;

    // Start a binary search loop; continue until start pointer is greater than the end pointer
    while (start <= end) {
        
        // Calculate the middle index of the current range
        int mid = start + (end - start) / 2;

        // If the middle element is equal to the target, return the index of the middle element
        if (arr[mid] == target) {
            return mid;
        }

        // If the left half of the array is sorted (arr[mid] >= arr[start])
        else if (arr[mid] >= arr[start]) {
            
            // Check if the target is in the sorted left part of the array
            if (target >= arr[start] && target <= arr[mid]) {
                end = mid - 1;  // If the target is in the left part, move 'end' to mid - 1
            } 
            else {
                start = mid + 1;  // Otherwise, search in the right half, move 'start' to mid + 1
            }
        } 
        // If the right half of the array is sorted (arr[mid] < arr[start])
        else {
            
            // Check if the target is in the sorted right part of the array
            if (target >= arr[mid] && target <= arr[end]) {
                start = mid + 1;  // If the target is in the right part, move 'start' to mid + 1
            } 
            else {
                end = mid - 1;  // Otherwise, search in the left half, move 'end' to mid - 1
            }
        }
    }

    // If the target is not found, return -1
    return ans;
    
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

     int target;
     cout<<"ENter the target element: ";
     cin>>target;

     int result = SearchInRotated(arr,target);

     if(!result){
        cout<<"The number exist";
     }
     else{
        cout<<"The number does not exist";
     }
     
}