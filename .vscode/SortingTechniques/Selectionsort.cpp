#include<iostream>
using namespace std;

//<------------->  Time Complexity : 0(n2) <-------------------->

void SelectionSort(int arr[], int n) {
    int index;

    // Iterate through each element in the array
    for(int i = 0; i < n - 1; i++) {
        
        index = i; // Assume the minimum is the first unsorted element

        // Find the index of the smallest element in the remaining unsorted array
        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[index]) {
                index = j; // Update index if a smaller element is found
            }
        }
        // Swap the found minimum element with the first unsorted element
        swap(arr[i], arr[index]);
    }
}


int main(){ 

    int n = 6;
    int arr[n] = {10,1,7,3,5,12};

    SelectionSort(arr,6);

    cout<<"After Sorting: ";
    for(int i=0; i<n; i++){
         cout<<arr[i] << " ";
    }
}