#include<iostream>
using namespace std;

void Reverse(int arr[], int n){
     
    int i=0,j=n-1;//Two pointers for traversing a

    //When i and j are equal or i extends j --> terminate the loop
    while(i < j){
         
         swap(arr[i],arr[j]);
         i++,j--; //increase i and decrease j
    }
    
}

int main(){
     
      int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
         cin>>arr[i];
    }

    Reverse(arr,n);

    cout<<"After Reverse: ";
    for(int i=0; i<n; i++){
         cout<<arr[i] << " ";
    }
     
}