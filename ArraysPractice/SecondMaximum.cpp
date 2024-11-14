#include<iostream>

using namespace std;

int SecondMax(int arr[], int n){

    //To hold the maximum number
     int max_num = -1;

     //First -> Find the Largest/Maximum number from the array
     for(int i=0; i<n; i++){
        if(arr[i] > max_num){
            max_num = arr[i];
        }
     }

     //To hold the second maximum number
     int second_max = -1;

     //Loop to find the second max no
     for(int i=0; i<n; i++){

        //If element is equal to largest 
         if(arr[i] != max_num){
            //Compare the current element and the second_max 
            //(arr[i]>second_max ; second_max = arr[i])
             second_max = max(arr[i],second_max);
         }
     }
     return second_max;
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

    cout<<"The Second Maximum element is: "<<SecondMax(arr,n);
}