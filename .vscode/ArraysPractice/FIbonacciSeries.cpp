#include<iostream>
using namespace std;

void Fibonacci(int arr[], int n){
     
     arr[0] = 0;
     arr[1] = 1;

     for(int i=2; i<n; i++){
        arr[i] = arr[i-1] + arr[i-2];
       
     }

     cout<<arr[n-1]<<" " ;
}

int main(){

      int n;
    cout<<"Enter the size: ";
    cin>>n;

    int arr[n];

    Fibonacci(arr,n);

}