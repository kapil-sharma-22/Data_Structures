#include<iostream>
using namespace std;

void BubbleSort1(int arr[], int n) {
    // Loop through the array from the end to the beginning
    for(int i = n - 1; i >= 0; i--) {
        bool swapped = false; // Track if any swaps happen

        // Compare each pair of adjacent elements
        for(int j = 0; j < i; j++) {
            // If the current element is greater than the next
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // Swap them
                swapped = true; // Mark that a swap occurred
            }
        }

        // If no swaps occurred, the array is sorted
        if(!swapped) {
            break; // Exit the loop early
        }
    }
}

void BubbleSort2(int arr[], int n){
     
     for(int i=0; i<n-1; i++){
         
         bool swapped = false;

         for(int j=0; j<n-i-1; j++){
             
             if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
             }
         }
         if(!swapped){
            break; //Break the loop early 
         }
     }
}


int main(){
     
     int n;
     cout<<"Enter the size: ";
     cin>>n;

     int arr[n];
     cout<<"Enter the Elements: ";
     for(int i=0; i<n; i++){
        cin>>arr[i];
     }

     BubbleSort1(arr,n);
     BubbleSort2(arr,n);


     cout<<"After sorting: ";
     for(int i=0; i<n; i++){
         cout<<arr[i] << " ";
     }
}