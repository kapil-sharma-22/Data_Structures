#include<iostream>
using namespace std;

int MissingNumber1(int arr[], int n){

    if(arr[0] != 1){
        return 1;
    }
     
     int sum = 0;
     for(int i=0; i<n; i++){
         sum += arr[i];
     }

     int mis_num = (n*(n+1))/2  - sum;

     return mis_num;

}

/*int MissingNumber(int arr[], int n){

    //If first number is missing
    if(arr[0] != 1){
        return 1;
    }
     
     for(int i=0; i<n-1; i++){
         
         if(arr[i+1] - arr[i] != 1){
            return arr[i]+1;
         }
     }
     return n+1;

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

   //cout<<"The Missing Number is: " << MissingNumber(arr,n);
   cout<<"The Missing Number is: " << MissingNumber1(arr,n);

}