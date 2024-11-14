#include<iostream>
using namespace std;

// Function to rotate the array by 1 position to the right
void Rotateby1(int arr[], int n){
    // Store the last element of the array
    int last_element = arr[n-1];

    // Start from the end of the array and shift elements to the right
    int i = n-1;
    while(i >= 1) {
        arr[i] = arr[i-1]; // Move each element one position to the right
        i--; // Decrement the index
    }

    // Place the last element at the start of the array
    arr[0] = last_element;
}


//<------------->ANOTHER LOGIC FOR ROTATING THE ARRAY ELEMENT BY 1 <--------------------->
/*int temp = arr[n-1];
       for(int i=n-2; i>=0; i--){
          arr[i+1] = arr[i]; 
        }*/

 
int main(){
     
    int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }

    Rotateby1(arr,n);

    
     cout<<"After Rotating: ";
    for(int i=0; i<n; i++){
        cout<<arr[i] << " ";
    }
}