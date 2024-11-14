#include<iostream>
using namespace std;

void InsertionSort(int arr[], int n) {
    // Start from the second element (index 1) as the first element is already "sorted"
    for (int i = 1; i < n; i++) {
        // Compare the current element with the elements before it
        for (int j = i; j > 0; j--) {
            // If the current element is smaller than the previous element, swap them
            if (arr[j] < arr[j - 1]) {
                swap(arr[j], arr[j - 1]);
            } else {
                // If no swap is needed, break out of the inner loop
                break;
            }
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

     InsertionSort(arr,n);


     cout<<"After sorting: ";
     for(int i=0; i<n; i++){
         cout<<arr[i] << " ";
     }
}